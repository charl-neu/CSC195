#pragma once
#include <iostream>
using namespace std;
using age_t = unsigned short;

class Human
{
public:
    Human()
    {
        cout << "constructor\n";
        m_count++;
    }
    Human(string name, age_t age) :
        m_name{ name },
        m_age{ age }
    {
        cout << "constructor\n";
        m_count++;

        //image = new unsigned char[435];
    }
    
    string GetName() { return m_name; }
    age_t GetAge() { return m_age; }
    void SetAge(age_t age) { this->m_age = age; }
    ~Human()
    {
        cout << "Destructor\n";
        m_count--;
        //delete image;
    }

    static int GetCount() { return m_count; }
protected:
    string m_name;
    age_t m_age = 0;
    //unsigned char* image;
    static int m_count;
    static const float m_tax;
};

