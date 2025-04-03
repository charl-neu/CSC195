#include <iostream>
using namespace std;

//Struct: usually holds only data, public by default
//Class: usually holds methods, private by default
int main() {
    //std::cout if you dont use std namespace
    cout << "Hello, World!" << endl;

    //datatypes
    int i = 87;
    printf("%d\n", i);
    cout << i << std::endl;
    cout << sizeof(int) << std::endl;
    cout << (char)i << endl;
    cout << &i << endl;
    cout << ++i << endl;
    cout << i++ << endl;
    cout << i << endl;

    char c = 'A';
    cout << c << endl;


    return 0;
}