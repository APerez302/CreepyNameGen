#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// I've been watching a lot of CreepCast
// and thought it'd be fun to make a creepy pasta
// name generator. So this is it.

// Global access functions
void Suffix();
void Prefix();
void Names();

int main()
{
    char choice;
    char name;
    cout << "-----------------------------" << endl
         << "Generate Name Type 1 (G)" << endl
         << "EX: Eyeless Jack, Laughing Jack" << endl
         << "Generate Name Type 2 (F)" << endl
         << "EX: Jeff the Killer, Ben Drowned" << endl
         << "Quit (Q)" << endl
         << "-----------------------------" << endl;
    cout << "Please pick an option: ";
    cin >> choice;

    switch (choice)
    {
    case 'G':
        cout << "Generating name." << endl;
        Prefix();
        Names();
        break;

    case 'F':
        cout << "Generating name." << endl;
        Suffix();
        Names();
        break;

    case 'Q':
        cout << "Exiting program." << endl;
        exit(0);
        break;

    default:
        cout << "You did not enter a valid input." << endl;
    }

    return 0;
}

// Now we have 3 random generators.
// Two for the 'adjectives' and one for the name.

void Suffix()
{
    cout << "Suffix" << endl;
}

void Prefix()
{
    cout << "Prefix" << endl;
}

void Names()
{
    const int MIN_VAL = 0;
    const int MAX_VAL = 10;
    int y; 

    unsigned seed = time(0);
    srand(seed);

    y = (rand() % ( MAX_VAL - MIN_VAL + 1)) + MIN_VAL; 

    string arr[10] = {"Jeff", "Jane", "Jack", "Jill", "Ray", 
        "Joe", "Bob", "Amanda", "Angela", "Shayne" };

    cout << arr[y] << endl;
}