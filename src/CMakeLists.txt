#CMake version
cmake_minimum_required(VERSION 3.0)

set(myproject "T1")
# Project name
project(${myproject})

#Specify the required C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")


#Define the executable
add_executable(${PROJECT_NAME} 
	pizzerie.cpp
	pizzerie.hpp
	pizza.cpp
	pizza.hpp
	order.cpp
	order.hpp
	main2.cpp
	lock.cpp
	lock.hpp)


