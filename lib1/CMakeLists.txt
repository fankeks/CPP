cmake_minimum_required(VERSION 3.5)
project(lib1 VERSION 0.1.0 LANGUAGES ASM C CXX)

file(GLOB
     CPP_SOURCE "*.cpp")
file(GLOB
     HPP_SOURCE "*.hpp")
add_library(${PROJECT_NAME} STATIC
            ${CPP_SOURCE} ${HPP_SOURCE})
            
set_target_properties(${PROJECT_NAME} PROPERTIES
                      CXX_STANDARD 11
                      CXX_STANDARD_REQUIRED ON
                     )