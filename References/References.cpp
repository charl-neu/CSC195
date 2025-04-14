
#include <iostream>
using namespace std;


void func1(int* p)
{
    if (p != nullptr) *p = 5;
}

void Swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap(int& a, int& b) //OVERLOAD *epic guitar solo*
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int i1 = 5;
    int* p1 = &i1;//pointer
    //p1 = nullptr;
    func1(p1);

    int& r1 = i1; //reference
    r1 = 10;

    int i2 = 16;


    cout << "i1: " << i1 << " i2: " << i2 << endl;
    Swap(&i1, &i2);
    cout << "i1: " << i1 << " i2 " << i2 << endl;
    Swap(i1, i2);
    cout << "i1: " << i1 << " i2 " << i2 << endl;
    const int h = 4;

    cout << i1 << endl;
    //cout << &r1 << endl;
    //cout << &i1 << endl;
    
    for (int i = 0; i < 1000; i++)
    {
        cout << *p1++ << endl;
    }

    int v = 5;
    if (v) cout << "True" << endl;
}

