#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class person {
private:
    string name;
    string address;
    string dept;

public:
    person(string n, string a, string d);
    void set_name(const char* name);
    void set_address(const char* add);
    void set_dept(const char* d);
    string get_name() const;
    string get_address() const;
    string get_dept() const;
    ~person();
};

#endif
