#pragma once
#include "Header.h"

class Teacher : public Human
{
public:
	Teacher()
	{
		cout << "Teacher constructor\n";
	}
	Teacher(string name, age_t age, string job) :
		Human(name, age),
		position{job}	
	{
		cout << "Student constructor\n";
	}

	void Setposition(string job) { position = job; }
	string Getposition() { return position; }

private:
	string position;
};