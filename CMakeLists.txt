cmake_minimum_required(VERSION 3.29 FATAL_ERROR)
project(Networking)
find_package(Boost 1.84.0 REQUIRED)
add_executable(${PROJECT_NAME} src/main.cpp)
target_include_directories(${PROJECT_NAME}
	PRIVATE
	${Boost_INCLUDE_DIRS}
)
target_link_libraries(${PROJECT_NAME}
	PRIVATE
	${Boost_LIBRARIES}
)