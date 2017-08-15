
include(${gtest_SOURCE_DIR}/cmake/internal_utils.cmake)
config_compiler_and_linker()

add_executable(Tests
	hiker.cpp)

target_include_directories(Tests PRIVATE
	"${gmock_SOURCE_DIR}/include"
	"${gtest_SOURCE_DIR}/include")

target_link_libraries(Tests PRIVATE
	gmock_main)
