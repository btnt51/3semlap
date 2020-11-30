cmake_minimum_required(VERSION 3.17)
project(3semlap)

set(CMAKE_CXX_STANDARD 20)

add_executable(3semlap src/main.cpp src/AFunction.h
        src/CHyperbola.cpp src/CHyperbola.h
        src/CEllipse.cpp src/CEllipse.h
        src/CMenu.cpp src/CMenu.h)