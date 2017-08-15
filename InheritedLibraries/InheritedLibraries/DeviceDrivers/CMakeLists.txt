add_library(DeviceDrivers
	Flash.cpp
	Flash.h)

target_include_directories(DeviceDrivers PUBLIC
	./)

target_link_libraries(DeviceDrivers PUBLIC
	PICDrivers)
