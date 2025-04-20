#pragma once
#include "BaseClass.h"

class class1 : public BaseClass
{
public:

	void Read(std::ostream& ostream, std::istream& istream) override
	{
		BaseClass::Read(ostream, istream); 
		ostream << "Enter cares: ";
		istream >> cares;
	}

	void Write(std::ostream& ostream) override
	{
		BaseClass::Write(ostream); 
		ostream << "Cares: " << cares << endl;
	}
	
	classType GetType() override {return classType::CLASS1;}

private:
	int cares = 0;
};