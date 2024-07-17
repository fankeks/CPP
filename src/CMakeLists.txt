cmake_minimum_required(VERSION 3.5)
project(src VERSION 0.1.0 LANGUAGES ASM C CXX)


# Компилирую исполняемый файл
file(GLOB
     CPP_SOURCE "*.cpp")
file(GLOB
     C_SOURCE "*.c")
file(GLOB
     H_SOURCE "*.h")
add_executable(${PROJECT_NAME} ${CPP_SOURCE} ${C_SOURCE} ${H_SOURCE})
set_target_properties(${PROJECT_NAME} PROPERTIES
                      CXX_STANDARD 11
                      CXX_STANDARD_REQUIRED ON
                      )

# Линкуем
#config
target_include_directories(${PROJECT_NAME} PRIVATE
                           ${CMAKE_CURRENT_SOURCE_DIR}/../config)
target_link_libraries(${PROJECT_NAME} config)