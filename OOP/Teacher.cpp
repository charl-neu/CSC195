#include "Teacher.h"

void Teacher::Read()
{
	cout << "TEACHER" << endl;
	Human::Read();
	cout << "Position: ";
	cin >> position;
}

void Teacher::Write()
{
	cout<< "TEACHER" << endl;
	Human::Write();
	cout << "Position: " + position << endl;
}