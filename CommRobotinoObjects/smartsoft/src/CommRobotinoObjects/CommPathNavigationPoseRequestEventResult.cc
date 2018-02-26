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

#include "CommRobotinoObjects/CommPathNavigationPoseRequestEventResult.hh"

#include <cstring>

using namespace CommRobotinoObjects;

CommPathNavigationPoseRequestEventResult::CommPathNavigationPoseRequestEventResult()
:	CommPathNavigationPoseRequestEventResultCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
CommPathNavigationPoseRequestEventResult::CommPathNavigationPoseRequestEventResult(const CommRobotinoObjects::NodeRequestAnserType &state)
:	CommPathNavigationPoseRequestEventResultCore() // base constructor sets default values as defined in the model
{
	setState(state);
}
 */

CommPathNavigationPoseRequestEventResult::CommPathNavigationPoseRequestEventResult(const CommPathNavigationPoseRequestEventResultCore &commPathNavigationPoseRequestEventResult)
:	CommPathNavigationPoseRequestEventResultCore(commPathNavigationPoseRequestEventResult)
{  }

CommPathNavigationPoseRequestEventResult::CommPathNavigationPoseRequestEventResult(const DATATYPE &commPathNavigationPoseRequestEventResult)
:	CommPathNavigationPoseRequestEventResultCore(commPathNavigationPoseRequestEventResult)
{  }

CommPathNavigationPoseRequestEventResult::~CommPathNavigationPoseRequestEventResult()
{  }

void CommPathNavigationPoseRequestEventResult::get(char* r)const
{
  std::stringstream tmp;
  switch(idl_CommPathNavigationPoseRequestEventResult.state) {
    case NodeRequestAnserType::STATE_UNKNOWN:
      strcpy(r,"(unknown)");
      break;
    case NodeRequestAnserType::ERROR_NONODE:
      strcpy(r,"(nonode)");
      break;
    case NodeRequestAnserType::FAIL:
      strcpy(r,"(fail)");
      break;
    case NodeRequestAnserType::SUCCESS:
      strcpy(r,"(success)");
	  break;
    default:
      strcpy(r,"(error)");
      break;
  }
}