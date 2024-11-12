//arithematic op using if else if
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    if (op == '+')
        cout << "Result: " << num1 + num2 ;
    else if (op == '-')
        cout << "Result: " << num1 - num2 ;
    else if (op == '*')
        cout << "Result: " << num1 * num2 ;
    else if (op == '/')
        cout << "Result: " << num1 / num2 ;
    else
        cout << "Invalid operator";

    return 0;
}
