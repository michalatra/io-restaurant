cmake_minimum_required(VERSION 3.21)
project(restaurant)

set(CMAKE_CXX_STANDARD 14)

add_executable(restaurant main.cpp User.cpp User.h Shift.cpp Shift.h Schedule.cpp Schedule.h HolidayRequest.cpp HolidayRequest.h Employee.cpp Employee.h Ingredient.cpp Ingredient.h Dish.cpp Dish.h Menu.cpp Menu.h Task.cpp Task.h Address.cpp Address.h Order.cpp Order.h Client.cpp Client.h Reservation.cpp Reservation.h Restaurant.cpp Restaurant.h LoginHandler.h RegisterHandler.h LoginHandler.cpp RegisterHandler.cpp Administrator.h Administrator.cpp)
