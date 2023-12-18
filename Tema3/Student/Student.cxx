#include <iostream>
#include "Student.hpp"
#include "University.hpp"

Student::Student(const std::string& studentName) : name(studentName) {
    std::cout << "Student " << name << " created.\n";
}

void Student::enroll(std::shared_ptr<University> univ) {
    university = univ;
    std::cout << name << " enrolled in university.\n";
}

std::string Student::getName() const {
    return name;
}

void Student::displayInfo() {
    if (auto univ = university.lock()) {
        std::cout << name << " is enrolled in " << univ->getName() << ".\n";
    } else {
        std::cout << name << " is not currently enrolled in any university.\n";
    }
}

Student::~Student() {
    std::cout << "Student " << name << " destroyed.\n";
}
