#include "person.h"

person::person(string n, string a, string d) : name(n), address(a), dept(d) {}

void person::set_name(const char* n) {
    name = n;
}

void person::set_address(const char* add) {
    address = add;
}

void person::set_dept(const char* d) {
    dept = d;
}

string person::get_name() const {
    return name;
}

string person::get_address() const {
    return address;
}

string person::get_dept() const {
    return dept;
}

person::~person() {}
