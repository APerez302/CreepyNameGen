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

// This is the stuff that comes after the name
void Suffix()
{
    const int MIN_VAL = 0;
    const int MAX_VAL = 5;
    int y;

    unsigned seed = time(0);
    srand(seed);
    // I learned this method from my college textbook
    //"Starting Out With C++ From Control Structures Through Objects 8th Ed."
    //- Tony Gaddis

    y = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;

    string arr[5] = {"the Killer", ".EXE", "Drowned", "from Hell", "the Painter"};

    cout << arr[y] << endl;
}

// I don't know what to call this other than prefix but it's the stuff that comes before the name
void Prefix()
{
    const int MIN_VAL = 0;
    const int MAX_VAL = 10;
    int y;

    unsigned seed = time(0);
    srand(seed);

    y = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;

    string arr[10] = {"Laughing", "Eyeless", "Evil", "Giant", "Dead",
    "Lost", "Dr.", "Bloody", "Scary", "My Friend:"};

    cout << arr[y] << endl;
}

void Names()
{
    const int MIN_VAL = 0;
    const int MAX_VAL = 77;
    int y;

    unsigned seed = time(0);
    srand(seed);

    y = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;

    string arr[77] = {"Jeff", "Jane", "Jack", "Hunter", "Isaiah",
                       "Jill", "Ray", "Joe", "Bob", "Amanda", "Angela", "Nick",
                       "Shayne", "Courtney", "John", "Jordan", "Janet", "Erica",
                       "Kim", "Steve", "Noah", "Keith", "Olivia", "Anthony", "Ian",
                       "Damien", "Spencer", "Charlotte", "Max", "Erik", "Toby", "Carlos",
                       "Tommy", "Mac", "Josh", "Orlando", "Joey", "Alyssa", "Cole",
                       "Brandon", "Jack", "Gary", "Terry", "Jerry", "Amy", "Ron", "Anne",
                       "Chris", "April", "Andy", "Percy", "Rob", "Robert", "Mike", "Matt",
                       "Nate", "Kate", "Andy", "Rose", "Leslie", "Kenny", "Tom", "Bea",
                       "Ash", "Dawn", "Rick", "Shawn", "Arasha", "Garret", "Rhett", "Link",
                       "Trevor", "Nicole", "Brad", "Aaron", "Ruby", "Amber"};

    cout << arr[y] << endl;
}