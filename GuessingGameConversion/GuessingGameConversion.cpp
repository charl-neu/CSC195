#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int difficulty;
    bool validdifficulty = false;
    while (!validdifficulty) {
        try {
            cout << "Choose a difficulty.\n1 - Easy (1-10)\n2 - Medium (1-50)\n3 - Hard (1-100)" << endl;

            cin >> difficulty;

            if (difficulty > 3 || difficulty < 1) 
            {
                throw (difficulty);
            }

            validdifficulty = true;
        }
        catch (...) {
            cout << "Chosen difficulty isnt valid. You must choose 1, 2, or 3." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    switch (difficulty)
    {
    case 1:
        difficulty = 10;
        break;
    case 2:
        difficulty = 50;
        break;
    case 3:
        difficulty = 100;
        break;
    default:
        break;
    }
    int randnum = rand() % difficulty + 1;
    cout << "\nI have chosen a number between 1 and " + to_string(difficulty) + "\nGuess what number it is." << endl;
    int i = 1;
    int guess = 0;
    while (i < 6)
    {
        cout << "\nIt is guess number " + to_string(i) << endl;
        try
        {
            cin >> guess;
            if (guess == 0)
            {
                throw(guess);
            }
            else if (guess > randnum)
            {
                cout << "\nToo high! Try again!" << endl;
            }
            else if (guess < randnum)
            {
                cout << "\nToo low! Try again" << endl;
            }
            else
            {
                cout << "\nYou won! Congratulations!" << endl;
                return 0;
            }
            i += 1;
            cin.clear();
        }
        catch (...) {
            cout << "\nThat is not a valid number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cout << "\n\nYou are out of guesses! Game over!" << endl;


}