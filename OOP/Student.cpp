#include "Student.h"

void Student::Read()
{
	cout << "STUDENT" << endl;
	Human::Read();
	cout << "GPA: ";
	cin >> m_gpa;
}

void Student::Write()
{
	cout << "STUDENT" << endl;
	Human::Write();
	cout << "GPA: " + to_string(m_gpa) << endl;
}
