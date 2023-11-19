#pragma once
#include "Person.hpp"

namespace Human {
    class Teacher : public Person {
    private:
        char* name;
        int age;
        char* subject;

    public:
        Teacher(const char*, int, const char*);
        Teacher(const Teacher&);
        Teacher(Teacher&&);
        ~Teacher();

        Teacher& operator = (const Teacher& other);
        Teacher& operator = (Teacher&& other);

        virtual void printDetails() const override;
        virtual void setName(const char*) override;
    };
}