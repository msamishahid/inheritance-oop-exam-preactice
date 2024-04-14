#include "teacher.h"

teacher::teacher(string n, string a, string d, string r) : person(n, a, d), rank(r) {}

void teacher::set_rank(const char* r) {
    rank = r;
}

string teacher::get_rank() const {
    return rank;
}
