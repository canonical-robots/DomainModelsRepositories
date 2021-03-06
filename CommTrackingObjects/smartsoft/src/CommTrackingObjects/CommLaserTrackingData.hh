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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------

// --------------------------------------------------------------------------
//
//  Copyright (C) 2003 Boris Kluge
//
//        schlegel@hs-ulm.de
//
//        Prof. Dr. Christian Schlegel
//        University of Applied Sciences
//        Prittwitzstr. 10
//        D-89075 Ulm
//        Germany
//
//  This file is part of the "SmartSoft Basic Communication Classes".
//  It provides basic standardized data types for communication between
//  different components in the mobile robotics context. These classes
//  are designed to be used in conjunction with the SmartSoft Communication
//  Library.
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
//  (partly based on work by Christian Schlegel and Pablo d'Angelo)
//
// --------------------------------------------------------------------------


#ifndef COMMTRACKINGOBJECTS_COMMLASERTRACKINGDATA_H_
#define COMMTRACKINGOBJECTS_COMMLASERTRACKINGDATA_H_

#include "CommTrackingObjects/CommLaserTrackingDataCore.hh"

namespace CommTrackingObjects {
		
class CommLaserTrackingData : public CommLaserTrackingDataCore {
	public:
		// default constructors
		CommLaserTrackingData();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommLaserTrackingData(const CommBasicObjects::CommMobileLaserScan &scan, const std::vector<CommTrackingObjects::CommLaserTrackedObject> &objects);
		
		CommLaserTrackingData(const CommLaserTrackingDataCore &commLaserTrackingData);
		CommLaserTrackingData(const DATATYPE &commLaserTrackingData);
		virtual ~CommLaserTrackingData();
		
		// use framework specific getter and setter methods from core (base) class
		using CommLaserTrackingDataCore::get;
		using CommLaserTrackingDataCore::set;
		
		//
		// feel free to add customized methods here
		//

		inline unsigned getObjectsNbrElements() const
		{
			return idl_CommLaserTrackingData.objects.size();
		}
		inline CommTrackingObjects::CommLaserTrackedObject getObjectsElementFromPos(
				const unsigned &pos) const
		{
			return CommTrackingObjects::CommLaserTrackedObject(
					idl_CommLaserTrackingData.objects[pos]);
		}
		inline bool setObjectsElementOnPos(
				const CommTrackingObjects::CommLaserTrackedObject &objects,
				const unsigned &pos)
		{
			if (pos < getObjectsNbrElements())
			{
				idl_CommLaserTrackingData.objects[pos] = objects;
				return true;
			}
			return false;
		}

		inline CommBasicObjects::CommMobileLaserScan getScan() const
		{
			return CommBasicObjects::CommMobileLaserScan(
					idl_CommLaserTrackingData.scan);
		}
		inline void setScan(const CommBasicObjects::CommMobileLaserScan &scan)
		{
			idl_CommLaserTrackingData.scan = scan;
		}

		//
		// add your customized interface here
		//
	/// internal use only


		 //
		  // SET
		  //

		  /**
		    Set the laser scan to which this tracking data refers.
		   */
		  inline void set_laser_scan(const CommBasicObjects::CommMobileLaserScan &scan)
		  {
			  idl_CommLaserTrackingData.scan = scan;
		  }

		  /**
		    Set the number of objects which this tracking data contains.
		    Always set the number accordingly before setting object information.
		   */
		  inline void set_num_objects(unsigned int n)
		  {
			  idl_CommLaserTrackingData.objects.resize(n);
		  }

		  /**
		    Set the ID of object \a obj_idx to \a id.
		   */
		  inline void set_object_id(unsigned int obj_idx, unsigned long id)
		  {
			  idl_CommLaserTrackingData.objects[obj_idx].id = id;
		  }

		  /**
		    Set the first scan point of object \a obj_idx to scan point index \a pnt_index.
		   */
		  inline void set_object_first_point(unsigned int obj_idx, unsigned int pnt_index)
		  {
			  idl_CommLaserTrackingData.objects[obj_idx].first_point = pnt_index;
		  }

		  /**
		    Set the last scan point of object \a obj_idx to scan point index \a pnt_index.
		   */
		  inline void set_object_last_point(unsigned int obj_idx, unsigned int pnt_index)
		  {
			  idl_CommLaserTrackingData.objects[obj_idx].last_point = pnt_index;
		  }

		  //
		  // GET
		  //

		  /**
		    Return the laser scan to which this tracking data refers.
		   */
		  inline CommBasicObjects::CommMobileLaserScan get_laser_scan() const
		  {
		    return CommBasicObjects::CommMobileLaserScan(idl_CommLaserTrackingData.scan);
		  }

		  /**
		    Return the number of objects contained in this tracking data.
		   */
		  inline unsigned int get_num_objects() const
		  {
		    return idl_CommLaserTrackingData.objects.size();
		  }

		  /**
		    Return the ID of object \a obj_idx.
		   */
		  inline unsigned long get_object_id(unsigned int obj_idx) const
		  {
		    return idl_CommLaserTrackingData.objects[obj_idx].id;
		  }

		  /**
		    Get the scan point index of the first scan point belonging to object \a obj_idx.
		   */
		  inline unsigned int get_object_first_point(unsigned int obj_idx) const
		  {
		    return idl_CommLaserTrackingData.objects[obj_idx].first_point;
		  }

		  /**
		    Get the scan point index of the last scan point belonging to object \a obj_idx.
		   */
		  inline unsigned int get_object_last_point(unsigned int obj_idx) const
		  {
		    return idl_CommLaserTrackingData.objects[obj_idx].last_point;
		  }

		  //
		  // INPUT/OUTPUT
		  //

		  /**
		    Write information about this tracking data to the given output stream.
		   */
		  void print(std::ostream &os = std::cout) const;


};

inline std::ostream &operator<<(std::ostream &os, const CommLaserTrackingData &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommTrackingObjects */
#endif /* COMMTRACKINGOBJECTS_COMMLASERTRACKINGDATA_H_ */
