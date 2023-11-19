#include "Student.hpp"
#include <iostream>
#include <cstring>
using namespace Human;

Student::Student(const char* StudentName, int StudentAge, float StudentGrade, int StudentClasses) {
    this->name = new char[strlen(StudentName) + 1];
    strcpy(this->name, StudentName);
    this->age = StudentAge;
    this->grade = StudentGrade;
    this->classes = StudentClasses;
    std::cout << "Student -> I was created! I'm " << this->name << std::endl;
}

Student::Student(const Student& s1) {
    this->age = s1.age;
    this->grade = s1.grade;
    this->classes = s1.classes;
    int nameLength = strlen(s1.name);
    this->name = new char[nameLength];
    memcpy(this->name, s1.name, nameLength);
    std::cout << "Student -> I was cloned! I'm also " << this->name << std::endl;
}

Student::Student(Student&& s1) {
    this->name = s1.name;
    this->age = s1.age;
    this->grade = s1.grade;
    this->classes = s1.classes;
    s1.name = nullptr;
    s1.age = 0;
    s1.grade = 0.0;
    s1.classes = 0;
    std::cout << "Student -> I was moved!\n";
}

Student::~Student() {
    delete [] this->name;
    std::cout << "Student -> Goodbye world!\n";
}

void Student::printDetails() const {
    std::cout << "Student -> Name: " << (this->name ? this->name : "") << ", Age: " << this->age << " years old, Grade: " << this->grade << ", Classes: " << this->classes << std::endl;
}

void Student::setName(const char* studentName) {
    delete[] name;
    name = new char[strlen(studentName) + 1];
    strcpy(name, studentName);
}