execute_process(COMMAND "/home/rae/catkin_ws/build/jaco-ros/jaco_demo/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/rae/catkin_ws/build/jaco-ros/jaco_demo/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
