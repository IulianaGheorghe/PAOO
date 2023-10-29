#include <iostream>
#include <cstring>
#include "example.hpp"

Person::Person(char* personName, int personAge, float personHeight) {
    this->name = personName;
    this->age = personAge;
    this->height = personHeight;
    std::cout << "I was born! I'm " << this->name << std::endl;
}

Person::Person(const Person& p1) {
    this->age = p1.age;
    this->height = p1.height;
    int nameLength = strlen(p1.name);
    this->name = new char[nameLength];
    memcpy(this->name, p1.name, nameLength);
    std::cout << "I was cloned! I'm also " << this->name << std::endl;
}

Person::Person(Person&& p1) {
    this->name = p1.name;
    this->age = p1.age;
    this->height = p1.height;
    p1.name = nullptr;
    p1.age = 0;
    p1.height = 0;
    std::cout << "I was moved!\n";
}
