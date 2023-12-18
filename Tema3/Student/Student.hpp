#include <string>
#include <memory>
#pragma once

class University; 

class Student {
    private:
        std::string name;
        std::weak_ptr<University> university;

    public:
        Student(const std::string&);
        void enroll(std::shared_ptr<University>);
        std::string getName() const;
        void displayInfo();
        ~Student();
};