#include <iostream>
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
    char adj;
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
    cout << "Name" << endl;
}