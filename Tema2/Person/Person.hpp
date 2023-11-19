#pragma once

namespace Human {
    class Person {
        public:
            virtual void printDetails() const = 0;
            virtual void setName(const char* name) = 0;
    };
};