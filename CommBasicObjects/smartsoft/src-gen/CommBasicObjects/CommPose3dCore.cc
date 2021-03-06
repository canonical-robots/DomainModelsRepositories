//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------
#include "CommBasicObjects/CommPose3dCore.hh"

// serialization/deserialization operators
//#include "CommBasicObjects/CommPose3dACE.hh"

// include the hash.idl containing the hash constant
#include "hash.hh"
#include <assert.h>
#include <cstring>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

#ifdef ENABLE_HASH
	#include <boost/functional/hash.hpp>
#endif

namespace CommBasicObjects 
{
	const char* CommPose3dCore::getCompiledHash()
	{
		return CommBasicObjectsIDL::REPO_HASH;
	}
	
	void CommPose3dCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommBasicObjects::CommPosition3d(idl_CommPose3d.position)
		CommBasicObjects::CommPosition3d::getAllHashValues(hashes);
		// get hash value(s) for CommBasicObjects::CommOrientation3d(idl_CommPose3d.orientation)
		CommBasicObjects::CommOrientation3d::getAllHashValues(hashes);
	}
	
	void CommPose3dCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommPose3dCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommBasicObjects::CommPosition3d(idl_CommPose3d.position)
		CommBasicObjects::CommPosition3d::checkAllHashValues(hashes);
		// check hash value(s) for CommBasicObjects::CommOrientation3d(idl_CommPose3d.orientation)
		CommBasicObjects::CommOrientation3d::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommPose3dCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += CommBasicObjects::CommPosition3d::generateDataHash(data.position);
		seed += CommBasicObjects::CommOrientation3d::generateDataHash(data.orientation);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommPose3dCore::CommPose3dCore()
	:	idl_CommPose3d()
	{  
		setPosition(CommBasicObjects::CommPosition3d());
		setOrientation(CommBasicObjects::CommOrientation3d());
	}
	
	CommPose3dCore::CommPose3dCore(const DATATYPE &data)
	:	idl_CommPose3d(data)
	{  }

	CommPose3dCore::~CommPose3dCore()
	{  }
	
	void CommPose3dCore::to_ostream(std::ostream &os) const
	{
	  os << "CommPose3d(";
	  getPosition().to_ostream(os);
	  getOrientation().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void CommPose3dCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<position>";
		getPosition().to_xml(os, indent);
		os << indent << "</position>";
		os << indent << "<orientation>";
		getOrientation().to_xml(os, indent);
		os << indent << "</orientation>";
	}
	
	// restore from xml stream
	void CommPose3dCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_position("<position>");
		static const Smart::KnuthMorrisPratt kmp_orientation("<orientation>");
		
		if(kmp_position.search(is)) {
			CommBasicObjects::CommPosition3d positionItem;
			positionItem.from_xml(is);
			setPosition(positionItem);
		}
		if(kmp_orientation.search(is)) {
			CommBasicObjects::CommOrientation3d orientationItem;
			orientationItem.from_xml(is);
			setOrientation(orientationItem);
		}
	}
	
	/*
	void CommPose3dCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommBasicObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommBasicObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommPose3dACE.hh)
		cdr << idl_CommPose3d;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommPose3d);
		cdr << data_hash;
		// std::cout << "CommPose3dCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommPose3dCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommBasicObjectsIDL::HashList hashes;
		ACE_CDR::Long hashes_size;
		cdr >> hashes_size;
		for(int i=0; i<hashes_size; ++i) 
		{
			ACE_CString hash;
			cdr >> hash;
			hashes.push_back(hash.c_str());
		}
		checkAllHashValues(hashes);
		
		// Here the actual de-serialization takes place using the InputCDR serialization operator>>
		// (see CommPose3dACE.hh)
		cdr >> idl_CommPose3d;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommPose3d);
		assert(data_hash == own_hash);
		// std::cout << "CommPose3dCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommBasicObjects */
