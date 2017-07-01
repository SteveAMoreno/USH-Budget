#include <iomanip>
#include <iostream>

#include <shrekBudget.h>
#include <stwyBudget.h>

using namespace std;

// Function Declarations
int shrkBudget(int, int);
int stwyBudget(int, int);

const int MAX_PROJ = 44000, // Maximum projection
        MIN_PROJ = 2000; // Minimum projection

const int MAX_HOURS = 16, // Maximum of operation hours
        MIN_HOURS = 7; // Minimum of operation hours


int main()
{

    int parkHours, // Number of park operating hours
        proj; // Park projection


    // Program Title
    cout << "---------------------------------" << endl;
    cout << right << setw(27) << "Shrek / Starway Budget" << endl;
    cout << "---------------------------------" << endl;


    // Validate park operating hours
    while(parkHours < MIN_HOURS || parkHours > MAX_HOURS)
    {
        // User enters number of operating hours
        cout << "Park operating hours: ";
        cin >> parkHours;
    }

    // Validate projection
    while(proj < MIN_PROJ || proj > MAX_PROJ)
    {
        // User enters expected park projection
        cout << "Park projection: ";
        cin >> proj;
    }


    // Styling table heading
    cout << "---------------------------------" << endl;
    cout << "Venue" << "            " << "Hours Available" << endl;
    cout << "---------------------------------" << endl;

    // Display budget hours in table format
    cout << left << setw(10) << "Shrek" << right << setw (15) << shrkBudget(parkHours, proj) << endl;
    cout << left << setw(10) << "Starway" << right << setw(15) << stwyBudget(parkHours, proj) << endl;

    return 0;
}
