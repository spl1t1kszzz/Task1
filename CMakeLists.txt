cmake_minimum_required(VERSION 3.28)
project(poissonsoft_task1)

set(CMAKE_CXX_STANDARD 20)

add_executable(poissonsoft_task1 main.cpp
        Point3D/Point3D.cpp
        Point3D/Point3D.h
        Segment3D/Segment3D.cpp
        Segment3D/Segment3D.h
        Polyline3D/Polyline3D.cpp
        Polyline3D/Polyline3D.h
        DistanceCalc/DistanceCalc.cpp
        DistanceCalc/DistanceCalc.h
        Vector3D/Vector3D.cpp
        Vector3D/Vector3D.h)
