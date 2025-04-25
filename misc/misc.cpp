#include "Point.h"
#include <vector>
#include <string>
#include <fstream>

#define NAME "Raymond"
#define PI 3.1415926535897932384626433832795f

using names_t = std::vector<std::string>;

namespace math
{
	template<typename T, typename T2>

	T max(T a, T2 b)
	{
		return (a > b) ? a : b;
	}

	template<typename V>
	class C
	{
		V c;
	};
}

void print(const names_t& names)
{


	for (std::string name : names)
	{
		std::cout << name << std::endl;
	}

}

template<typename T>


void StreamOut(std::ostream& ostream, const T& value)
{
	ostream << value << std::endl;
}

void StreamIn(std::istream& istream, std::string text)
{
	std::getline(istream, text);
}



int main()
{
	StreamOut(std::cout, NAME);

	//math::ipoint_t p(4, 5);

	std::fstream fstream("lext.txt");
	//StreamOut(fstream, p);
	StreamOut(fstream, "Hello!");
	StreamOut(fstream, 5);
	StreamOut(fstream, 52.6f);
	fstream.close();

	std::string text;
	std::ifstream ifstream("Text.txt");
	if (ifstream.is_open())
	{
		while (std::getline(ifstream, text))
		{
			std::cout << text << std::endl;
		}
		//StreamIn(ifstream, text);
		std::cout << text;
	}
	ifstream.close();

	std::cout << text;

	StreamIn(std::cin, text);
	std::cout << text;

	Point<int> po(134, 15);
	Point<int> po2(12, 19);
	Point<int> po3 = po + po2;

	std::cout << po3.GetX() << " " << po3.GetY() << std::endl;

	std::cout << "po3: " << po3 << std::endl; 

	std::cout << std::max(5, 10) << std::endl;
	std::cout << math::max(5.5f, 7.2f) << std::endl;

	names_t names{ "Alex", "Brandon", "Tristin" };
	names.push_back("Alex");
	print(names);
}

