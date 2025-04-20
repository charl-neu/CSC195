#pragma once
#include "Header.h"

class Student : public Human
{
public:
	Student()
	{
		cout << "Student constructor\n";
	}
	Student(string name, age_t age, float gpa) :
		Human(name, age),
		m_gpa {gpa}
	{
		cout << "Student constructor\n";
	}

	void Read() override;
	void Write() override;

	void SetGPA(float gpa) { m_gpa = gpa; }
	float GetGPA() { return m_gpa; }

	Type GetType() override { return Type::STUDENT; }

private:
	float m_gpa = 4.0f;
};