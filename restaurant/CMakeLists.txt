cmake_minimum_required(VERSION 3.21)
project(restaurant)

set(CMAKE_CXX_STANDARD 14)

add_executable(restaurant main.cpp User.cpp User.h Shift.cpp Shift.h Schedule.cpp Schedule.h)
