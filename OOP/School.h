#pragma once
#include "Header.h"
#include <vector>

class School
{

public:
	~School();

	void Add(Human::Type type);

	void DisplayAll();

private:
	std::vector<Human*> m_humans;
};