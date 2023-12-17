cmake_minimum_required(VERSION 3.10)
project(OOP VERSION 1.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Student)
add_subdirectory(University)

add_executable(OOP main.cxx)

target_link_libraries(OOP PUBLIC Student University pthread)
target_include_directories(OOP PUBLIC 
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/Student"
                           "${PROJECT_SOURCE_DIR}/University")