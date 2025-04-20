#pragma once
#include "BaseClass.h"

class class2 : public BaseClass
{
public:

	void Read(std::ostream& ostream, std::istream& istream) override
	{
		BaseClass::Read(ostream, istream); 
		ostream << "Enter chance of a six: ";
		istream >> chancesix;
	}

	void Write(std::ostream& ostream) override
	{
		BaseClass::Write(ostream); 
		ostream << "Chance of a six: " << chancesix << endl;
	}

	classType GetType() override { return classType::CLASS2; }

private:
	float chancesix = 0;
};