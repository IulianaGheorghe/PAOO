add_library(University STATIC University.cxx)
target_include_directories(University PUBLIC 
                           "${PROJECT_SOURCE_DIR}/Student")