#pragma once
#include <iostream>
#include <string>
#include "console.h"
using namespace std;
using age_t = unsigned short;

class Human
{
public:
    enum class Type : unsigned char
    {
        STUDENT = 1,
        TEACHER = 2
    };
    //int s  = static_case<int>(Type::STUDENT)

    Human()
    {
        cout << "human constructor\n";
        m_age = 0;
        m_count++;
    }
    Human(string name, age_t age) :
        m_name{ name },
        m_age{ age }
    {
        cout << "human constructor\n";
        m_count++;

        //image = new unsigned char[435];
    }


    
    string GetName() { return m_name; }
    age_t GetAge() { return m_age; }
    void SetAge(age_t age) { this->m_age = age; }

    virtual Type GetType() = 0;


    ~Human()
    {
        cout << "Destructor\n";
        m_count--;
        //delete image;
    }

    virtual void Read();
    virtual void Write();

    static int GetCount() { return m_count; }
protected:
    string m_name;
    age_t m_age = 255;
    //unsigned char* image;
    static int m_count;
    static const float m_tax;
};

