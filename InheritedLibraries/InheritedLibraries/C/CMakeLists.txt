add_library(C
	C.cpp
	C.h)

target_include_directories(C PUBLIC
	./)

target_link_libraries(C INTERFACE
	Hello)
