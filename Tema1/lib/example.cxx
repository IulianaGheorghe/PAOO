#include <iostream>
#include <cstring>
#include "example.hpp"

Person::Person(char* personName, int personAge, float personHeight) {
    this->name = personName;
    this->age = personAge;
    this->height = personHeight;
    std::cout << "I was born! I'm " << this->name << std::endl;
}
