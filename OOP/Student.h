#pragma once
#include "Header.h"

class Teacher : public Human
{
public:
	Teacher()
	{
		cout << "Student constructor\n";
	}
	Teacher(string name, age_t age, float gpa) :
		Human(name, age),
		m_gpa {gpa}
	{
		cout << "Student constructor\n";
	}

	void SetGPA(float gpa) { m_gpa = gpa; }
	float GetGPA() { return m_gpa; }

private:
	float m_gpa = 4.0f;
};