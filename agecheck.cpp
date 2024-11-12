//user age child adult teenager senior
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age < 12)
        cout << "Child";
    else if (age >= 12 && age < 18)
        cout << "Teenager";
    else if (age >= 18 && age <= 60)
        cout << "Adult";
    else
        cout << "Senior";

    return 0;
}
