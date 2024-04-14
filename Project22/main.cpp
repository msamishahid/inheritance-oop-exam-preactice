#include<iostream>
#include "person.h"
#include "teacher.h"
#include "student.h"
using namespace std;

int main()
{
	student s("John", "123 Main St", "CS", 1234, 4);
	teacher t("Jane", "456 Elm St", "Math", "Professor");
	cout << "Student: " << s.get_name() << " " << s.get_address() << " " << s.get_dept() << " " << s.get_enroll() << " " << s.get_num_courses() << endl;
	cout << "Teacher: " << t.get_name() << " " << t.get_address() << " " << t.get_dept() << " " << t.get_rank() << endl;
	return 0;
}	