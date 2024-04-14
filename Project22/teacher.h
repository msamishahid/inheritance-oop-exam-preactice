#ifndef TEACHER_H
#define TEACHER_H

#include "person.h"

class teacher : public person {
private:
    string rank;

public:
    teacher(string n, string a, string d, string r);
    void set_rank(const char* r);
    string get_rank() const;
};

#endif
