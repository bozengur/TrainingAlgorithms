cmake_minimum_required(VERSION 3.15)

project(trainingAlgorithms VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set (SOURCES 
	src/main.cpp
	src/algorithms/Solution.cpp)

add_executable(trainAlgorithms ${SOURCES})
target_include_directories(trainAlgorithms PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/include/algorithms)

if (MSVC)
	target_compile_options(trainAlgorithms PRIVATE /W4 /WX)
else()
	target_compile_options(trainAlgorithms PRIVATE -Wextra -Wpedantic -Werror)
endif()

