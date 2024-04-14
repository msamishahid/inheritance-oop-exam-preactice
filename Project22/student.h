#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class student : public person {
private:
    int enroll;
    int num_courses;

public:
    student(string n, string a, string d, int e, int c);
    void set_enroll(int e);
    void set_num_courses(int c);
    int get_enroll() const;
    int get_num_courses() const;
};

#endif
