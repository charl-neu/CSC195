#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class BaseClass
{
public:
	enum class classType
	{
		CLASS1,
		CLASS2
	};

	virtual void Read(ostream& ostream, istream& istream)
	{
		ostream << "Enter name: ";
		istream >> name;
		ostream << "Enter twang value: ";
		istream >> twang;
	}
	virtual void Write(ostream& ostream)
	{
		ostream << "Name: " << name << endl;
		ostream << "Twang: " << twang << endl;
	}
	
	string GetName()
	{
		return name;
	}
	virtual classType GetType() = 0;
private:
	string name;
	string twang;
};