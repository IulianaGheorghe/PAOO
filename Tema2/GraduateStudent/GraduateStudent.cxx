#include "GraduateStudent.hpp"
#include <iostream>

namespace Human {
    GraduateStudent::GraduateStudent(char* name, int age, float grade, int classes, const char* topic)
        : Student(name, age, grade, classes), researchTopic(topic) {}

    void GraduateStudent::printDetails() const{
        std::cout << "I am " << getStudentName() << ", a graduate student."<< std::endl;
    }

    void GraduateStudent::ConductResearch() {
        std::cout << "Graduate student is conducting research on: " << researchTopic << std::endl;
    }
}