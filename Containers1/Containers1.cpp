
#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>
using namespace std;

void arrayf()
{
    array<string, 7> a = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" }; //Hate how we arent starting on monday; Define the array
    cout << a.size() << endl; //print the size of the list
    for (int i = 0; i < a.size(); i++) //repeat for each element in the array, incrimenting i each time. i starts at 0 and ends at 1-array size
    {
        cout << a[i] << endl; //print the string at the current index of a
    }

}

void vectorf()
{
    //vector
    vector<int> vec = { 1,2,3,4,5 }; //define vector
    vec.push_back(6); //add 6 to end
    vec.push_back(7); //add 7 to end
    vec.pop_back(); //remove the last value

    for (int i = 0; i < vec.size(); i++) //repeat for each element in the vector, incrimenting i each time. i starts at 0 and ends at 1-vector size
    {
        cout << vec[i] << endl; //print the number at the current index of a
    }
}

void listf()
{

    //list
    list<string> lst = { "Apple", "Banana", "Grape" }; //define list
    lst.push_back("Grapefruit"); //add element to end
    lst.push_front("Gooseberry"); //add element to beginning
    lst.remove("Grape"); //remove the element named "Grape"

    for (auto iter = lst.begin(); iter != lst.end(); iter++) //make an iterator pointing to the first element of the list, then move the iterator to point to the next element
    {
        cout << *iter << endl; //print the element the iterator is pointing to
    }

}

void mapf()
{
    //map
    map<string, int> m; //define map
    m["Grapes"] = 16; //add map element
    m["Pears"] = 23; //add map element
    m["Oranges"] = 54; //add map element
    m["Pears"] += 7; //increase the relevent number for the element with the Pears key by five.

    for (auto itr = m.begin(); itr != m.end(); itr++) //make an iterator pointing to the first element of the map (Alphebetically, by the key in this case), then move the iterator to point to the next element
    {
        cout << itr->first << " remaining: " << itr->second << endl; //itr->first refers to the first value (key). itr->second refers to the second value (the int). This prints the amount of fruits remaining.
    }
}

int main()
{
    arrayf();
    vectorf();
    listf();
    mapf();





}
