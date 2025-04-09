#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
using namespace std;

unsigned int GetHash(std::string str)
{
	unsigned int hash = 0;
	for (char c : str)
	{
		hash = hash * 31 + (int)c;
	}
	return hash;
}

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
	vec[0] = 5;

	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(4);
	s.pop();
	s.push(5);

	cout << s.top() << endl;

	//list
	vector<int> lst = { 1,2,3,4,5 };
	lst.push_back(6);
	lst.insert(lst.begin(), 0);

	for (auto iter = lst.begin(); iter != lst.end(); iter++)
	{
		cout << *iter << endl;
	}

	//map
	map<string, int> m;
	m["riley"] = 46;
	m["garrett"] = 86;
	m["mike"] = 100;
	cout << m["riley"] << endl;

	for (auto itr = m.begin(); itr != m.end(); itr++)
	{
		cout << itr->first << " " << itr->second << endl;
	}

	//cout << i << endl;
	cout << &a[0] << endl;	
	cout << &a[1] << endl;
	//a.size(); not possible, a is just a pointer

	//unordered map
	unordered_map<int, string> um;
	um[1135] = "Davis";
	um[7326] = "Jobs";
	um[1316] = "Joestar";
	cout << um[7326] << endl;

	string name = "Charles";
	unsigned int hash = GetHash(name);
	cout << hash << endl;

	int data[10];
	data[hash % 10] = 77859;
	cout << data[hash % 10] << endl;

	return 0;
}