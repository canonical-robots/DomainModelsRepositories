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
#ifndef COMMNAVIGATIONOBJECTS_COMMPLANNERGOAL_DATA_H_
#define COMMNAVIGATIONOBJECTS_COMMPLANNERGOAL_DATA_H_



namespace CommNavigationObjectsIDL 
{
	struct CommPlannerGoal
	{
		int id;
		int flag;
		double xWayPoint;
		double yWayPoint;
		double hWayPoint;
		double xGoalPoint;
		double yGoalPoint;
		double hGoalPoint;
  	};
};

#endif /* COMMNAVIGATIONOBJECTS_COMMPLANNERGOAL_DATA_H_ */
