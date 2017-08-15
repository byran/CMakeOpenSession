add_library(Runner
	Runner.cpp
	Runner.h)

target_include_directories(Runner PUBLIC
	./)

target_link_libraries(Runner PUBLIC
	PICDrivers)
