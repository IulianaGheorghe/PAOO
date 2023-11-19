#include <iostream>
#include <cstring>
#include "Person.hpp"
#include "Student.hpp"
#include "GraduateStudent/GraduateStudent.hpp"
#include "Teacher.hpp"

#define MAX_LENGTH 8

using namespace Human;

int main() {

    char* name = new char[MAX_LENGTH];
    memcpy(name, "Alberto", MAX_LENGTH);
    char* subject = new char[MAX_LENGTH];
    memcpy(subject, "Italian", MAX_LENGTH);

    Teacher teacher1(name, 50, subject);
    teacher1.printDetails();

    Teacher teacher2(std::move(teacher1));
    teacher2.setName("Alviro");
    teacher2.printDetails();

    memcpy(name, "Cosmin", MAX_LENGTH);
    memcpy(subject, "History", MAX_LENGTH);
    Teacher teacher3(name, 45, subject);
    teacher3 = teacher2;
    teacher3.printDetails();

    memcpy(name, "Andrei", MAX_LENGTH);
    Student student1(name, 20, 8.45, 3);
    student1.printDetails();
    
    memcpy(name, "Alex", MAX_LENGTH);
    Student student2(name, 21, 8.75, 2);
    student2 = std::move(student1);
    student2.printDetails();
    student2.hasClasses();

    memcpy(name, "Andreea", MAX_LENGTH);
    GraduateStudent gradStudent(name, 25, 9.50, 0, "Machine Learning");
    gradStudent.printDetails();
    gradStudent.study();  
    gradStudent.ConductResearch();

    return 0;
}