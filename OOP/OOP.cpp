// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "School.h"
#include "Student.h"
#include "Teacher.h"
#include "vector"



int main()
{
    School school;

    bool quit = false;
    while (!quit)
    {
       
        system("cls");
        cout << "1) Add human\n";
        cout << "2) Display all humans\n";
        cout << "3) Display human of Type\n";
        cout << "4) Quit\n";
        
        unsigned short selection;
        cin >> selection;

        if (std::cin.fail()) {
            std::cin.clear(); // clear the fail state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "Invalid input. Please enter a valid number.\n";
            cin;
        }
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // flush any extra input
        }
    
        switch (selection)
        {
        case 1:
            cout << "1) Student\n";
            cout << "2) Teacher\n";
            unsigned short type;
            cin >> type;

            school.Add(static_cast<Human::Type>(type));
            break;
        case 2:
            school.DisplayAll();
            cin;
            break;
        case 3:
            break;
        case 4:
            quit = true;
            break;
        default:
            break;
        }
    }





 
    /*
    vector<Human*> school;

    Human* student = new Student{};
    student->Read();

    Teacher* teacher = new Teacher{};
    teacher->Read();

    school.push_back(student);
    school.push_back(teacher);

    for (Human* h : school)
    {
        h->Write();

        if (dynamic_cast<Student*>(h)) 
        {
            cout << ((Student*)(h))->GetGPA() << endl;
        }
        //identical
        if (h->GetType() == Human::Type::STUDENT)
        {
            cout << ((Student*)(h))->GetGPA() << endl;
        }

        if (dynamic_cast<Teacher*>(h))
        {
            cout << static_cast<int>(h->GetType());
        }


    }

    cout << Human::GetCount() << endl;

    //Student student1("Steve", 31, 4.2f);
    Student* student2 = new Student{ "Billy", 27, 2.75f };

    cout << sizeof(string) << endl;
    cout << sizeof(unsigned short) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(Human) << endl; //56
    cout << sizeof(Student) << endl; //64
    cout << sizeof(Teacher) << endl; //94

    cout << static_cast<char>((*student2).GetType()) << endl;

    delete student2;
    */
}

