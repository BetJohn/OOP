cmake_minimum_required(VERSION 3.19)
project(oop)

set(CMAKE_CXX_STANDARD 20)

add_executable(oop main.cpp Haina.cpp Haina.h Pantof.cpp Pantof.h Sifonier.cpp Sifonier.h)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)