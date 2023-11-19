#pragma once
#include "Person.hpp"

namespace Human {
    class Student : public Person {
    private:
        char* name;
        int age;
        float grade;
        int classes;

    public:
        Student(const char*, int, float, int);
        Student(const Student&);
        Student(Student&&);
        ~Student();

        Student& operator = (const Student& other);
        Student& operator = (Student&& other);

        virtual void printDetails() const override;
        virtual void setName(const char*) override;
    };
}