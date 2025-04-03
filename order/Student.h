#pragma once
#include "Student.cpp"

class Student
{
public:
	Student() {}
	Student(std::string name) { this->m_name = name; }
	std::string getName() { return m_name; }
	void setName(std::string n_name) { this->m_name = n_name; }

private:
	std::string m_name;
};