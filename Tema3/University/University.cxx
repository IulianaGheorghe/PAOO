#include "University.hpp"
#include "Student.hpp"
#include <thread> 
#include <chrono>

University::University(const std::string& univName) : name(univName) {
    std::cout << "University " << name << " created.\n";
}

void University::admitStudents() {
    std::lock_guard<std::mutex> lock(mutex);
    std::cout << "Admitting students to " << name << ".\n";
    // Simulate some processing time for admitting students
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
}

void University::displayStudents() const {
    std::cout << "Students enrolled in " << name << ":\n";
    for (const auto& student : students) {
        student->displayInfo();
    }
}

std::string University::getName() const {
    return name;
}

std::mutex& University::getMutex() {
    return mutex;
}

University::~University() {
    std::cout << "University " << name << " destroyed.\n";
}

