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


#ifndef COMMBASICOBJECTS_COMMJOYSTICK_H_
#define COMMBASICOBJECTS_COMMJOYSTICK_H_

#include "CommBasicObjects/CommJoystickCore.hh"

#include <math.h>

namespace CommBasicObjects {
		
class CommJoystick : public CommJoystickCore {
	public:
		// default constructors
		CommJoystick();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommJoystick(const short &xpos = 0, const short &ypos = 0, const short &x2pos = 0, const short &y2pos = 0, const unsigned short &buttons = 0);
		
		CommJoystick(const CommJoystickCore &commJoystick);
		CommJoystick(const DATATYPE &commJoystick);
		virtual ~CommJoystick();
		
		// use framework specific getter and setter methods from core (base) class
		using CommJoystickCore::get;
		using CommJoystickCore::set;
		
		//
		// feel free to add customized methods here
		//
		  /**
		    Get the position of the x axis as value between -1 and +1.
		   */
		  inline float get_x() const { return idl_CommJoystick.xpos * 3.05185e-5; }

		  /**
		    Get the position of the y axis as value between -1 and +1.
		   */
		  inline float get_y() const { return idl_CommJoystick.ypos * 3.05185e-5; }

		  /**
		    Get the position of the x axis as value between -32767 and +32767.
		   */
		  inline short get_x_int() const { return idl_CommJoystick.xpos; }

		  /**
		    Get the position of the y axis as value between -32767 and +32767.
		   */
		  inline short get_y_int() const { return idl_CommJoystick.ypos; }


		 /**
		   Get the position of the x 2 axis as value between -1 and +1.
	          */
		  inline float get_x2() const { return idl_CommJoystick.x2pos * 3.05185e-5; }

		/**
		  Get the position of the y 2 axis as value between -1 and +1.
		 */
		  inline float get_y2() const { return idl_CommJoystick.y2pos * 3.05185e-5; }

		/**
		  Get the position of the x 2 axis as value between -32767 and +32767.
		 */
		  inline short get_x2_int() const { return idl_CommJoystick.x2pos; }

		  /**
		    Get the position of the y 2 axis as value between -32767 and +32767.
		  */
		  inline short get_y2_int() const { return idl_CommJoystick.y2pos; }


		  /**
		    Get the state of the i-th button.
		   */
		  inline bool get_button(unsigned int i) const { return idl_CommJoystick.buttons & (1 << i); }

		  /**
		    Set the position of the x axis as value between -1 and 1.
		   */
		  inline void set_x(float p) { idl_CommJoystick.xpos = _float2int(p); }

		  /**
		    Set the position of the y axis as value between -1 and 1.
		   */
		  inline void set_y(float p) { idl_CommJoystick.ypos = _float2int(p); }

		  /**
		    Set the position of the x axis as value between -32767 and +32767.
		   */
		  inline void set_x_int(short p) { idl_CommJoystick.xpos = p; }

		  /**
		    Set the position of the y axis as value between -32767 and +32767.
		   */
		  inline void set_y_int(short p) { idl_CommJoystick.ypos = p; }

		  /**
		    Set the position of the x 2 axis as value between -1 and 1.
		   */
		  inline void set_x2(float p) { idl_CommJoystick.x2pos = _float2int(p); }

		  /**
		    Set the position of the y 2 axis as value between -1 and 1.
		   */
		  inline void set_y2(float p) { idl_CommJoystick.y2pos = _float2int(p); }

		  /**
		    Set the position of the x 2 axis as value between -32767 and +32767.
		   */
		  inline void set_x2_int(short p) { idl_CommJoystick.x2pos = p; }

		  /**
		    Set the position of the y 2 axis as value between -32767 and +32767.
		   */
		  inline void set_y2_int(short p) { idl_CommJoystick.y2pos = p; }

		  /**
		    Set the state of the i-th button.
		   */
		  inline void set_button(unsigned int i, bool b);

	private:

	  inline int _float2int(float f) const
	  {
	    if(f>1)  return  32767;
	    if(f<-1) return -32767;
	    return int(::rint(f*32767));
	  }
};

//
// Implementation
//


inline void CommJoystick::set_button(unsigned int i, bool b)
{
  if(b)
  {
	  idl_CommJoystick.buttons = idl_CommJoystick.buttons | (1 << i);
  }
  else
  {
	  idl_CommJoystick.buttons = idl_CommJoystick.buttons & ~(1 << i);
  }
}

inline std::ostream &operator<<(std::ostream &os, const CommJoystick &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMJOYSTICK_H_ */