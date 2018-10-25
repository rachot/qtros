cmake_minimum_required(VERSION 2.8.3)
project(qtros)

find_package(catkin REQUIRED COMPONENTS roscpp)

catkin_package()

include_directories(${catkin_INCLUDE_DIRS})

add_executable(qtros src/main.cpp)

target_link_libraries(qtros ${catkin_LIBRARIES})

