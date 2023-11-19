#pragma once
#include "Student.hpp"

namespace Human {
    class GraduateStudent : public Student {
    private:
        const char* researchTopic;

    public:
        GraduateStudent(char*, int, float, int, const char*);
        void printDetails() const override; 
        void ConductResearch(); 
    };
}