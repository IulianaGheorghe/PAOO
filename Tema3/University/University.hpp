#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <mutex>
#pragma once

class Student; 

class University {
    private:
        std::string name;
        std::vector<std::weak_ptr<Student>> students;
        std::mutex mutex;

    public:
        University(const std::string& univName);
        void admitStudent(std::shared_ptr<Student>);
        void displayStudents() const;
        std::string getName() const;
        std::mutex& getMutex(); 
        ~University();
};