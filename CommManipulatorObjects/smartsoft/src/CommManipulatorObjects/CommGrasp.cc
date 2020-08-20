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

#include "CommManipulatorObjects/CommGrasp.hh"

using namespace CommManipulatorObjects;

CommGrasp::CommGrasp()
:	CommGraspCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
CommGrasp::CommGrasp(const std::string &id, const CommBasicObjects::CommPose3d &pose, const double &quality, const double &width)
:	CommGraspCore() // base constructor sets default values as defined in the model
{
	setId(id);
	setPose(pose);
	setQuality(quality);
	setWidth(width);
}
 */

CommGrasp::CommGrasp(const CommGraspCore &commGrasp)
:	CommGraspCore(commGrasp)
{  }

CommGrasp::CommGrasp(const DATATYPE &commGrasp)
:	CommGraspCore(commGrasp)
{  }

CommGrasp::~CommGrasp()
{  }