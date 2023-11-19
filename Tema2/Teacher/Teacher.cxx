#include "Teacher.hpp"
#include <iostream>
#include <cstring>
using namespace Human;

Teacher::Teacher(const char* TeacherName, int TeacherAge, const char* TeacherSubject) {
    this->name = new char[strlen(TeacherName) + 1];
    strcpy(this->name, TeacherName);
    this->age = TeacherAge;
    this->subject = new char[strlen(TeacherSubject) + 1];
    strcpy(this->subject, TeacherSubject);
    std::cout << "Teacher -> I was created! I'm " << this->name << std::endl;
}

Teacher::Teacher(const Teacher& t1) {
    this->age = t1.age;
    int nameLength = strlen(t1.name);
    this->name = new char[nameLength + 1];
    strcpy(this->name, t1.name);

    int subjectLength = strlen(t1.subject);
    this->subject = new char[subjectLength + 1];
    strcpy(this->subject, t1.subject);

    std::cout << "Teacher -> I was cloned! I'm also " << this->name << std::endl;
}

Teacher::Teacher(Teacher&& t1) {
    this->name = t1.name;
    this->age = t1.age;
    this->subject = t1.subject;

    t1.name = nullptr;
    t1.subject = nullptr;
    t1.age = 0;

    std::cout << "Teacher -> I was moved!\n";
}

Teacher::~Teacher() {
    delete [] this->name;
    delete [] this->subject;
    std::cout << "Teacher -> Goodbye world!\n";
}

void Teacher::printDetails() const {
    std::cout << "Teacher -> Name: " << (this->name ? this->name : "") << ", Age: " << this->age << " years old, Subject: " << (this->subject ? this->subject : "") << std::endl;
}

void Teacher::setName(const char* TeacherName) {
    delete[] name;
    name = new char[strlen(TeacherName) + 1];
    strcpy(name, TeacherName);
}