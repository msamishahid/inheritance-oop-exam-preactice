#include<iostream>
#include "student.h"
using namespace std;

student::student(string n, string a, string d, int e, int c) : person(n, a, d) {
	enroll = e;
	num_courses = c;
}
void student::set_enroll(int e) 
{

	enroll = e;
}
void student::set_num_courses(int c)
{
	num_courses = c;
}
int student::get_enroll() const
{
	return enroll;
}
int student::get_num_courses() const
{

	return num_courses;
}
// Path: Project22/student.h