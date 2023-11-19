add_library(Teacher STATIC Teacher.cxx)
target_include_directories(Teacher PUBLIC 
                           "${PROJECT_SOURCE_DIR}/Person")