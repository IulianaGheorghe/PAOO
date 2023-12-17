add_library(Student STATIC Student.cxx)
target_include_directories(Student PUBLIC 
                           "${PROJECT_SOURCE_DIR}/University")