//Switch statement no-->month--->days
#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter the month number (1-12): ";
    cin >> month;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days" ;break;
        case 4: case 6: case 9: case 11:
            cout << "30 days" ;break;
        case 2: {
            bool isLeapYear;
            cout << "Is it a leap year? (1 for Yes, 0 for No): ";
            cin >> isLeapYear;
            if (isLeapYear)
                cout << "29 days" ;
            else
                cout << "28 days" ;
            break;
        }
        default: cout << "Invalid month." ;
    }

    return 0;
}
