//for loop pattern
/*    1
    1  2
  1  2  3  
1  2  3   4
 */
//for loop pattern
/*    1
    1  2
  1  2  3  
1  2  3   4
 */

#include <iostream>
using namespace std;

int main() {
    int n, j, i;
    cout << "Enter the number of rows: ";
    cin >> n;

    // rows
    for (i = 0; i < n; i++) {
        // columns
        for (j = 0; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

