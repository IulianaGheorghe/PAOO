#include <iostream>
#include <cstring>
#include "example.hpp"

#define MAX_LENGTH 7

int main() {
    
    char* name = new char[MAX_LENGTH];
    memcpy(name, "Andrei", MAX_LENGTH);
    Person person1(name, 20, 1.73f);
    {
        Person person2 = person1;
        std::cout << "Person2 -> ";
        person2.PrintDetails();
        std::cout << "Person1 -> ";
        person1.PrintDetails();

        Person person3 = std::move(person1);
        std::cout << "Person3 -> ";
        person3.PrintDetails();
        std::cout << "Person1 -> ";
        person1.PrintDetails();
    }
    return 0;
}