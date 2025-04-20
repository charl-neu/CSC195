#pragma once
#include "Class1.h"
#include "class2.h"

class Database
{
public:
	~Database()
	{
		for (BaseClass* obj : objects)
		{
			delete obj;
		}
	}

	void Create(BaseClass::classType type)
	{
		BaseClass* obj = nullptr;
		switch (type)
		{
		case BaseClass::classType::CLASS1:
			obj = new class1;
			break;
		case BaseClass::classType::CLASS2:
			obj = new class2;
			break;
		}
		obj->Read(cout, cin);
		objects.push_back(obj);
	}

	void DisplayAll()
	{
		for (BaseClass* obj : objects)
		{
			obj->Write(cout);
		}
	}

	void nameDisplay(const string& name)
	{
		for (BaseClass* obj : objects)
		{
			if (obj->GetName() == name)
			{
				obj->Write(cout);
			}
		}
	}

	void typeDisplay(BaseClass::classType type)
	{
		for (BaseClass* obj : objects)
		{
			if (obj->GetType() == type)
			{
				obj->Write(cout);
			}
		}
	}


private:
	vector<BaseClass*> objects;
};