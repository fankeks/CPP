cmake_minimum_required(VERSION 3.5)
project(Test VERSION 0.1.0 LANGUAGES ASM C CXX)


include(CTest)
enable_testing()


add_subdirectory(lib)
add_subdirectory(lib1)
add_subdirectory(src)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
