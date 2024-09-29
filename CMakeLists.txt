cmake_minimum_required(VERSION 3.28)
project(poissonsoft_task1)

set(CMAKE_CXX_STANDARD 20)

add_library(task1_lib
        Point3D/Point3D.cpp
        Segment3D/Segment3D.cpp
        Polyline3D/Polyline3D.cpp
        DistanceCalc/DistanceCalc.cpp
        Vector3D/Vector3D.cpp
)

add_executable(task1
        main.cpp
)

target_link_libraries(task1 task1_lib)

add_subdirectory(googletest)

enable_testing()

add_executable(task_1_tests
        test/test_main.cpp
        test/test_task1.cpp
)

target_link_libraries(task_1_tests gtest gtest_main task1_lib)
