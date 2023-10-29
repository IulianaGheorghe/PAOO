#pragma once

class Person {
    private:
        char* name;
        int age;
        float height;
    public:
        Person(char*, int, float);
        Person(const Person&);
        Person(Person&&);
        ~Person();
        void PrintDetails();
};