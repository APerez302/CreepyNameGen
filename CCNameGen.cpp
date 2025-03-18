#include <iostream>
using namespace std;

// I've been watching a lot of CreepCast
// and thought it'd be fun to make a creepy pasta
// name generator. So this is it.

//Global access functions

int main()
{
    char choice;
    cout << "-----------------------------" << endl
         << "Generate Name Type 1 (G)" << endl
         << "EX: Eyeless Jack, Laughing Jack" << endl
         << "Generate Name Type 2 (F)" << endl
         << "EX: Jeff the Killer, Ben Drowned" << endl
         << "Quit (Q)" << endl
         << "-----------------------------" << endl;
    cout << "Please pick an option: ";
    cin >> choice;
    
    switch(choice)
    {
        case 'Q': cout << "Exiting program." << endl;
        exit(0);
        break;
        default: cout << "You did not enter a valid input." << endl;
    }
    // Going to have three random generators
    // two for the adjectives and one for the name.

    return 0;
}