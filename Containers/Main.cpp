#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <map>
using namespace std;

int main()
{
	int i = 5;

	//array
	array<int, 5> a = { 1,2,3,4,5 };
	cout << a.size() << endl;

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << endl;
	}

	//vector
	vector<int> vec = { 1,2,3,4,5 };
	vec.push_back(6);
	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	//list
	list<int> lst = { 1,2,3,4,5 };
	lst.push_back(6);
	lst.insert(lst.begin(), 0);

	//map
	map<string, int> m;
	m["riley"] = 46;
	m["garrett"] = 86;
	m["mike"] = 100;
	cout << m["riley"] << endl;

	//cout << i << endl;
	cout << &a[0] << endl;	
	cout << &a[1] << endl;
	//a.size(); not possible, a is just a pointer

	cout << "Hello World!" << endl;

	return 0;
}