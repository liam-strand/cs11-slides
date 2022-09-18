/* arrays.cpp
 * 
 * By: Liam Strand
 * On: September 2022
 * 
 * For: 2D array demo code for lab02 of cs 11
 */

#include <iostream>

using namespace std;

int main() {
    int arr[4][5] = {
        {0, 1, 2,  3,  4},
        {0, 2, 4,  6,  8},
        {0, 3, 6,  9, 12},
        {0, 4, 8, 12, 16}
    };

    for (size_t i = 0; i < 4; i++) {
        for (size_t j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (size_t j = 0; j < 5; j++) {
        for (size_t i = 0; i < 4; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
