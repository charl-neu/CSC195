#include "Database.h"

int main()
{
    Database database;
    bool quit = false;
    while (!quit)
    {
        cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter type (0 for CLASS1, 1 for CLASS2): ";
            int type;
            cin >> type;
            database.Create(static_cast<BaseClass::classType>(type));
            break;
        }
        case 2:
            database.DisplayAll();
            break;
        case 3:
        {
            cout << "Enter name of class" << endl;
            string name;
            cin >> name;
            database.nameDisplay(name);
            break;
        }
        case 4:
        {
            cout << "Enter type (0 for CLASS1, 1 for CLASS2): ";
            int t;
            cin >> t;
            database.typeDisplay(static_cast<BaseClass::classType>(t));
            break;
        }
        case 5:
            quit = true;
            break;
        }
    }
}