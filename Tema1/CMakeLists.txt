cmake_minimum_required(VERSION 3.10)
project(OOPIntro VERSION 1.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(lib)

add_executable(OOPIntro main.cxx)

target_link_libraries(OOPIntro PUBLIC lib)
target_include_directories(OOPIntro PUBLIC 
                           "${PROJECT_BINARY_DIR}" 
                           "${PROJECT_SOURCE_DIR}/lib")