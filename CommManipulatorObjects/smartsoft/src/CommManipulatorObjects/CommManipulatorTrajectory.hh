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
#ifndef COMMMANIPULATOROBJECTS_COMMMANIPULATORTRAJECTORY_H_
#define COMMMANIPULATOROBJECTS_COMMMANIPULATORTRAJECTORY_H_

#include "CommManipulatorObjects/CommManipulatorTrajectoryCore.hh"

namespace CommManipulatorObjects {
		
class CommManipulatorTrajectory : public CommManipulatorTrajectoryCore {
	public:
		// default constructors
		CommManipulatorTrajectory();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommManipulatorTrajectory(const std::vector<CommManipulatorObjects::JointValues> &joint_angles, const CommBasicObjects::CommPose3d &pose_tcp, const CommManipulatorObjects::CommGripperTrajectory &gripper_angles, const CommManipulatorObjects::ManipulatorTrajectoryFlag &flag);
		
		CommManipulatorTrajectory(const CommManipulatorTrajectoryCore &commManipulatorTrajectory);
		CommManipulatorTrajectory(const DATATYPE &commManipulatorTrajectory);
		virtual ~CommManipulatorTrajectory();
		
		// use framework specific getter and setter methods from core (base) class
		using CommManipulatorTrajectoryCore::get;
		using CommManipulatorTrajectoryCore::set;
		
		//
		// feel free to add customized methods here
		//

		/**
		 * Set the number of elements in the trajectory.
		 * ATTENTION
		 * 		before you can use this method you have to set:
		 * 		1. which values are valid (@see setValidValues)
		 * @param size Number of elements in the trajectory
		 */
		inline void set_trajectory_size(size_t size) {
			if (ManipulatorTrajectoryFlag(idl_CommManipulatorTrajectory.flag) == ManipulatorTrajectoryFlag::JOINT_ANGLES)
				idl_CommManipulatorTrajectory.joint_angles.resize(size);
		}

		/**
		 * Return the number of elements in the trajectory.
		 * @return Number of elements in the trajectory
		 */
		inline size_t get_trajectory_size() const {
			if (ManipulatorTrajectoryFlag(idl_CommManipulatorTrajectory.flag) == ManipulatorTrajectoryFlag::JOINT_ANGLES)
				return idl_CommManipulatorTrajectory.joint_angles.size();

			return 0;
		}

		/**
		 * Set the number of joints the manipulator has.
		 * ATTENTION
		 * 		before you can use this method you have to set:
		 * 		1. which values are valid (@see setValidValues)
		 * 		2. the size of the trajectory (@see setTrajectorySize)
		 * @param jointCount Number of joints
		 */
		inline void set_joint_count(size_t count) {
			for (size_t i = 0; i < idl_CommManipulatorTrajectory.joint_angles.size(); ++i) {
				idl_CommManipulatorTrajectory.joint_angles[i].values.resize(count);
			}
		}

		/**
		 * Return the number of joints the manipulator has.
		 * @return Number of joints
		 */
		inline size_t get_joint_count() const {
			if (idl_CommManipulatorTrajectory.joint_angles.size() > 0)
				return idl_CommManipulatorTrajectory.joint_angles[0].values.size();

			return 0;
		}

		/**
		 * Set the time [sec] in which the given joint values must be reached.
		 * ATTENTION
		 * 		before you can use this method you have to set:
		 * 		1. which values are valid (@see setValidValues)
		 * 		2. the size of the trajectory (@see setTrajectorySize)
		 * @param index Index of the element in the trajectory
		 * @param time Time in seconds in which the joint values must be reached
		 */
		inline void set_joint_time(size_t index, float time) {
			idl_CommManipulatorTrajectory.joint_angles[index].time = time;
		}

		/**
		 * Get the time [sec] in which the given joint values must be reached.
		 * ATTENTION
		 * 		this method only returns useful values when the values are set
		 * 		to valid (@see setValidValues)
		 * @param index Index of the element in the trajectory
		 * @return Time in seconds in which the joint values must be reached
		 */
		inline float get_joint_time(size_t index) const {
			return idl_CommManipulatorTrajectory.joint_angles[index].time;
		}

		/**
		 * Set the angle of a joint for a specific element in the trajectory.
		 * ATTENTION
		 * 		before you can use this method you have to set:
		 * 		1. which values are valid (@see setValidValues)
		 * 		2. the size of the trajectory (@see setTrajectorySize)
		 * 		3. the number of joints (@see setJointCount)
		 * @param index Index of the element in the trajectory
		 * @param joint Index of the joint
		 * @param angle Anlge for the joint [rad]
		 */
		inline void set_joint_angle(size_t index, size_t joint, double angle) {
			idl_CommManipulatorTrajectory.joint_angles[index].values[joint] = angle;
		}

		/**
		 * Set the angle of a joint for a specific element in the trajectory.
		 * ATTENTION
		 * 		this method only returns useful values when the values are set
		 * 		to valid (@see setValidValues)
		 * @param index Index of the element in the trajectory
		 * @param joint Index of the joint
		 * @return Anlge for the joint [rad]
		 */
		inline double get_joint_angle(size_t index, size_t joint) const {
			return idl_CommManipulatorTrajectory.joint_angles[index].values[joint];
		}

		/**
		 * Set which trajectory values (poseTcp or jointAngles) should be used
		 * for the trajectory.
		 * @param flag decides which values should be used.
		 */
		inline void set_valid_values(ManipulatorTrajectoryFlag flag) {
			idl_CommManipulatorTrajectory.flag = flag;
		}

		/**
		 * Set which trajectory values (poseTcp or jointAngles) should be used
		 * for the trajectory.
		 * @return flag decides which values should be used.
		 */
		inline ManipulatorTrajectoryFlag get_valid_values() const {
			return idl_CommManipulatorTrajectory.flag;
		}

		/**
		 * Set the pose of the tool center point in the coordinate
		 * system of the robot.
		 * ATTENTION
		 * 		before you can use this method you have to set:
		 * 		1. which values are valid (@see setValidValues)
		 * @param x value of the pose
		 * @param y value of the pose
		 * @param z value of the pose
		 * @param phi value of the pose [rad]
		 * @param theta value of the pose [rad]
		 * @param psi value of the pose [rad]
		 */
		inline void set_pose_TCP_robot(const double x, const double y, const double z,
				const double azimuth, const double elevation, const double roll, const double unit = 0.001) {
			idl_CommManipulatorTrajectory.pose_tcp.position.x = x * unit * 1000;
			idl_CommManipulatorTrajectory.pose_tcp.position.y = y * unit * 1000;
			idl_CommManipulatorTrajectory.pose_tcp.position.z = z * unit * 1000;

			idl_CommManipulatorTrajectory.pose_tcp.orientation.azimuth = azimuth;
			idl_CommManipulatorTrajectory.pose_tcp.orientation.elevation = elevation;
			idl_CommManipulatorTrajectory.pose_tcp.orientation.roll = roll;
		}

		/**
		 * Return the pose of the tool center point in the coordinate
		 * system of the robot.
		 * ATTENTION
		 * 		this method only returns useful values when the values are set
		 * 		to valid (@see setValidValues)
		 * @param x value of the pose
		 * @param y value of the pose
		 * @param z value of the pose
		 * @param azimuth value of the pose [rad]
		 * @param elevation value of the pose [rad]
		 * @param roll value of the pose [rad]
		 */
		inline void get_pose_TCP_robot(double& x, double& y, double& z, double& azimuth, double& elevation,
				double& roll, const double unit = 0.001) const {
			x = idl_CommManipulatorTrajectory.pose_tcp.position.x * 0.001 / unit;
			y = idl_CommManipulatorTrajectory.pose_tcp.position.y * 0.001 / unit;
			z = idl_CommManipulatorTrajectory.pose_tcp.position.z * 0.001 / unit;

			azimuth = idl_CommManipulatorTrajectory.pose_tcp.orientation.azimuth;
			elevation = idl_CommManipulatorTrajectory.pose_tcp.orientation.elevation;
			roll = idl_CommManipulatorTrajectory.pose_tcp.orientation.roll;
		}
};

inline std::ostream &operator<<(std::ostream &os, const CommManipulatorTrajectory &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommManipulatorObjects */
#endif /* COMMMANIPULATOROBJECTS_COMMMANIPULATORTRAJECTORY_H_ */
