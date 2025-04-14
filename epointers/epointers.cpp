
#include <iostream>
#include <malloc.h>
using namespace std;

void func1()
{
    bool b = true;
    int i = 5;
}

void func2()
{
    bool b = false;
    float f = 10;
    func1();
}

void func3()
{
    int i[100000];
    func3();
}

void SetValue(int* v)
{
    *v = 5;
}

void Swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i = 5;
    float f = 4.5f;
    int* pointer = new int();
    cout << *pointer << endl;
    delete pointer;


    //Animal* dog = new Animal("Dog");
    //cout << (*dog).getName() << endl;
    //cout << dog->getName() << endl;
    //delete dog;

    //Animal cat = new Animal("Cat");
    //out << cat.getName() << endl;

    int* block = (int*)malloc(sizeof(int) * 1000);
    block[0] = 3;
    block[1] = 4;
    block[2] = 5;
    block[3] = 6;
    block++;
    cout << *(block + 2) << endl;
    free(--block);

    //
    int v1 = 10;
    int v2 = 20;

    int* p = nullptr;
    cout << p << endl;
    p = &v1;
    *p = 15; //changes what p points to so v1 = 5
    cout << p << endl;
    cout << &v1 << endl;
    cout << v1 << endl;

    p = &v2;
    *p = 11037;

    // SetValue(v2); no worky :<
    // cout << v2 << endl;

    SetValue(p); //yes worky :3
    cout << v2 << endl;

    Swap(&v1, &v2);
    cout << v1 << endl;
    cout << v2 << endl;
}

