#pragma once
#include <iostream>
#include <vector>
using namespace std;




class Shape {
public:
    Shape() {}
    ~Shape() {}

    virtual float Area();
};