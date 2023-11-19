add_library(GraduateStudent STATIC GraduateStudent.cxx)
target_include_directories(GraduateStudent PUBLIC 
                           "${PROJECT_SOURCE_DIR}/Student" 
                           "${PROJECT_SOURCE_DIR}/Person")