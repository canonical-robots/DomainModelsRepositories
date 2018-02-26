//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Christian Schlegel (schlegel@hs-ulm.de)
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

//--------------------------------------------------------------------------
//
//  Copyright (C) 2009 Christian Schlegel, Florian Poppa
//
//        schlegel@hs-ulm.de
//        poppa@hs-ulm.de
//
//        University of Applied Sciences
//        Prittwitzstr. 10
//        D-89075 Ulm
//        Germany
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2.1
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  General Public License for more details.
//
//  You should have received a copy of the GNU General Public License along
//  with this library; if not, write to the Free Software Foundation, Inc.,
//  59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
//
//--------------------------------------------------------------------------

#ifndef COMMBASICOBJECTS_COMMIMUDATA_H_
#define COMMBASICOBJECTS_COMMIMUDATA_H_

#include "CommBasicObjects/CommIMUDataCore.hh"

namespace CommBasicObjects {
		
class CommIMUData : public CommIMUDataCore {
	public:
		// default constructors
		CommIMUData();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommIMUData(const unsigned short &timestamp = 0, const double &temperature = 0.0, const double &accelerometer_x = 0.0, const double &accelerometer_y = 0.0, const double &accelerometer_z = 0.0, const double &gyroscope_x = 0.0, const double &gyroscope_y = 0.0, const double &gyroscope_z = 0.0, const double &magnetometer_x = 0.0, const double &magnetometer_y = 0.0, const double &magnetometer_z = 0.0, const double &roll = 0.0, const double &pitch = 0.0, const double &yaw = 0.0);
		
		CommIMUData(const CommIMUDataCore &commIMUData);
		CommIMUData(const DATATYPE &commIMUData);
		virtual ~CommIMUData();
		
		// use framework specific getter and setter methods from core (base) class
		using CommIMUDataCore::get;
		using CommIMUDataCore::set;
		
		//
		// feel free to add customized methods here
		//
		  // timestamp
		inline void get_timestamp(unsigned short &timestamp) const {
			timestamp = idl_CommIMUData.timestamp;
		}
		;
		inline void set_timestamp(const unsigned short &timestamp) {
			idl_CommIMUData.timestamp = timestamp;
		}
		;

		// temperature
		inline void get_temperature(double &temperature) const {
			temperature = idl_CommIMUData.temperature;
		}
		;
		inline void set_temperature(const double &temperature) {
			idl_CommIMUData.temperature = temperature;
		}
		;

		// accelerometer values
		inline void get_accelerometer_values(double &x, double &y, double &z) const {
			x = idl_CommIMUData.accelerometer_x;
			y = idl_CommIMUData.accelerometer_y;
			z = idl_CommIMUData.accelerometer_z;
		}
		;

		inline void set_accelerometer_values(const double &x, const double &y,
				const double &z) {
			idl_CommIMUData.accelerometer_x = x;
			idl_CommIMUData.accelerometer_y = y;
			idl_CommIMUData.accelerometer_z = z;
		}
		;

		// gyroscope values
		inline void get_gyroscope_values(double &x, double &y, double &z) const {
			x = idl_CommIMUData.gyroscope_x;
			y = idl_CommIMUData.gyroscope_y;
			z = idl_CommIMUData.gyroscope_z;
		}
		;

		inline void set_gyroscope_values(const double &x, const double &y,
				const double &z) {
			idl_CommIMUData.gyroscope_x = x;
			idl_CommIMUData.gyroscope_y = y;
			idl_CommIMUData.gyroscope_z = z;
		}
		;

		// magnetometer values
		inline void get_magnetometer_values(double &x, double &y, double &z) const {
			x = idl_CommIMUData.magnetometer_x;
			y = idl_CommIMUData.magnetometer_y;
			z = idl_CommIMUData.magnetometer_z;
		}
		;

		inline void set_magnetometer_values(const double &x, const double &y,
				const double &z) {
			idl_CommIMUData.magnetometer_x = x;
			idl_CommIMUData.magnetometer_y = y;
			idl_CommIMUData.magnetometer_z = z;
		}
		;

		// euler angles
		inline void get_euler_angles(double &roll, double &pitch, double &yaw) const {
			roll = idl_CommIMUData.roll;
			pitch = idl_CommIMUData.pitch;
			yaw = idl_CommIMUData.yaw;
		}
		;

		inline void set_euler_angles(const double &roll, const double &pitch,
				const double &yaw) {
			idl_CommIMUData.roll = roll;
			idl_CommIMUData.pitch = pitch;
			idl_CommIMUData.yaw = yaw;
		}
		;
};

inline std::ostream &operator<<(std::ostream &os, const CommIMUData &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMIMUDATA_H_ */