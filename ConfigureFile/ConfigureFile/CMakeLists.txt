cmake_minimum_required(VERSION 3.7)
project(Carina VERSION 2.3.1)

set(CMAKE_CXX_STANDARD 11)

option(CARINA_BUILD_TYPEB "Build the Type B project" ON)

add_subdirectory(PICDrivers)
add_subdirectory(Runner)
add_subdirectory(DeviceDrivers)
if(CARINA_BUILD_TYPEB)
	add_subdirectory(TypeB)
endif()
