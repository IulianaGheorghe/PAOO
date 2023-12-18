#include "University.hpp"
#include "Student.hpp"

University::University(const std::string& univName) : name(univName) {
    std::cout << "University " << name << " created.\n";
}

void University::admitStudent(std::shared_ptr<Student> student) {
    std::lock_guard<std::mutex> lock(mutex);

    // Create a weak_ptr from the shared_ptr before pushing it into the vector
    std::weak_ptr<Student> weakStudent = student;

    std::cout << "Admitting " << student->getName() << " to " << name << ".\n";
    students.push_back(weakStudent);
}

void University::displayStudents() const {
    std::cout << "Students enrolled in " << name << ":\n";
    for (const auto& weakStudent : students) {
        // Attempt to lock the weak_ptr to access the Student
        if (auto student = weakStudent.lock()) {
            student->displayInfo();
        } else {
            // The Student has been deleted
            std::cout << "Student no longer enrolled.\n";
        }
    }
}

std::string University::getName() const {
    return name;
}

std::mutex& University::getMutex() {
    return mutex;
}

University::~University() {
    std::cout << name << " destroyed.\n";
}

