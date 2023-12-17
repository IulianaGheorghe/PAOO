#include "Student.hpp"
#include "University.hpp"
#include <thread>
#include <vector>

int main() {
    auto student1 = std::make_unique<Student>("Tom");
    auto student2 = std::make_unique<Student>("Spencer");

    auto university = std::make_shared<University>("Tech University");

    std::thread thread1([&university, &student1]() {
        std::lock_guard<std::mutex> lock(university->getMutex());
        student1->enroll(university);
    });

    std::thread thread2([&university, &student2]() {
        std::lock_guard<std::mutex> lock(university->getMutex());
        student2->enroll(university);
    });

    thread1.join();
    thread2.join();

    university->admitStudents();
    university->displayStudents();

    return 0;
}
