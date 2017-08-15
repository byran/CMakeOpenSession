cmake_minimum_required(VERSION 3.7)
project(Carina)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(PICDrivers)
add_subdirectory(Runner)
add_subdirectory(DeviceDrivers)
add_subdirectory(TypeB)
