cmake_minimum_required(VERSION 3.5)
project(config VERSION 0.1.0 LANGUAGES ASM C CXX)


# Компилирую статическую библиотеку
file(GLOB
     CPP_SOURCE "*.cpp")
file(GLOB
     C_SOURCE "*.c")
file(GLOB
     H_SOURCE "*.h")
file(GLOB
     HPP_SOURCE "*.hpp")
add_library(${PROJECT_NAME} STATIC
            ${CPP_SOURCE} ${HPP_SOURCE}
            ${C_SOURCE} ${H_SOURCE}
            )