cmake_minimum_required(VERSION 3.23)
project(Indiv_CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(Indiv_CPP main.cpp Airline.cpp Airline.h Airport.cpp Airport.h Routes.cpp Routes.h ReadFile.cpp ReadFile.h RouteFinding.cpp RouteFinding.h Node.cpp Node.h Helpers.cpp Helpers.h)
