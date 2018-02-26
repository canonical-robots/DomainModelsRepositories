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
#ifndef COMMLOCALIZATIONOBJECTS_CPOSE2D_CORE_H_
#define COMMLOCALIZATIONOBJECTS_CPOSE2D_CORE_H_

#include "CommLocalizationObjects/CPose2DData.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommLocalizationObjects {
	
class CPose2DCore {
protected:
	// data structure
	CommLocalizationObjectsIDL::CPose2D idl_CPose2D;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommLocalizationObjectsIDL::CPose2D DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CPose2DCore();
	CPose2DCore(const DATATYPE &data);
	// default destructor
	virtual ~CPose2DCore();
	
	const DATATYPE& get() const { return idl_CPose2D; }
	operator const DATATYPE&() const { return idl_CPose2D; }
	DATATYPE& set() { return idl_CPose2D; }

	static inline std::string identifier(void) { return "CommLocalizationObjects::CPose2D"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element M_phi
	inline double getM_phi() const { return idl_CPose2D.m_phi; }
	inline CPose2DCore& setM_phi(const double &m_phi) { idl_CPose2D.m_phi = m_phi; return *this; }
	
	// getter and setter for element M_is3D
	inline bool getM_is3D() const { return idl_CPose2D.m_is3D; }
	inline CPose2DCore& setM_is3D(const bool &m_is3D) { idl_CPose2D.m_is3D = m_is3D; return *this; }
	
	// getter and setter for element M_x
	inline double getM_x() const { return idl_CPose2D.m_x; }
	inline CPose2DCore& setM_x(const double &m_x) { idl_CPose2D.m_x = m_x; return *this; }
	
	// getter and setter for element M_y
	inline double getM_y() const { return idl_CPose2D.m_y; }
	inline CPose2DCore& setM_y(const double &m_y) { idl_CPose2D.m_y = m_y; return *this; }
	
	// getter and setter for element M_z
	inline double getM_z() const { return idl_CPose2D.m_z; }
	inline CPose2DCore& setM_z(const double &m_z) { idl_CPose2D.m_z = m_z; return *this; }
};

} /* namespace CommLocalizationObjects */
#endif /* COMMLOCALIZATIONOBJECTS_CPOSE2D_CORE_H_ */