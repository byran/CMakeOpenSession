cmake_minimum_required(VERSION 3.7)
project(InheritedLibraries)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(Hello)
add_subdirectory(B)
add_subdirectory(C)
add_subdirectory(Application)
