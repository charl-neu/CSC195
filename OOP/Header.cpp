#include "Header.h"

void Human::Read()
{
	cout << "Enter Name:";
	cin >> m_name;
	cout << "Enter Age:";
	cin >> m_age;
}

void Human::Write()
{
	cout << "Name: " + m_name << endl;
	cout << "Age: " + to_string(m_age) << endl;
}
