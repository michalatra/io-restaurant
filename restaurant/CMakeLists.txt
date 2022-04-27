cmake_minimum_required(VERSION 3.21)
project(restaurant)

set(CMAKE_CXX_STANDARD 14)

add_executable(restaurant main.cpp Ingredient.cpp Ingredient.h Dish.cpp Dish.h Menu.cpp Menu.h)
