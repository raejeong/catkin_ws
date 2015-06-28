#!/bin/sh -x

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

cd "/home/rae/catkin_ws/src/jaco-ros/jaco_demo"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
/usr/bin/env \
    PYTHONPATH="/home/rae/catkin_ws/install/lib/python2.7/dist-packages:/home/rae/catkin_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/rae/catkin_ws/build" \
    "/usr/bin/python" \
    "/home/rae/catkin_ws/src/jaco-ros/jaco_demo/setup.py" \
    build --build-base "/home/rae/catkin_ws/build/jaco-ros/jaco_demo" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/rae/catkin_ws/install" --install-scripts="/home/rae/catkin_ws/install/bin"
