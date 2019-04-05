ros-env(){
	source /opt/ros/kinetic/setup.bash
	source /ros/catkin_ws/devel/setup.bash
	export ROS_PACKAGE_PATH=/ros/catkin_ws/:/opt/ros/kinetic/share/
}
ros-env
