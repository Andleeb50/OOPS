//check an alphabet is a vowel or not
#include <iostream>
using namespace std;

int main() {
    char c;
    
    cout << "Enter a character: ";
    cin >> c;

    // Check if the character is a vowel (both lowercase and uppercase)
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        cout << c << " is a vowel." << endl;
    } else {
        cout << c << " is not a vowel." << endl;
    }

    return 0;
}

