
configure_file(version.h.template version.h)

add_executable(TypeB
	main.cpp
	${CMAKE_CURRENT_BINARY_DIR}/version.h)

target_include_directories(TypeB PRIVATE
	${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(TypeB
	DeviceDrivers
	Runner)
