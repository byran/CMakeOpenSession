add_library(B
	B.cpp
	B.h)

target_include_directories(B PUBLIC
	./)

target_link_libraries(B INTERFACE
	Hello)
