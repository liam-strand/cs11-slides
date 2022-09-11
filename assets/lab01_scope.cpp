/* lab01.cpp
 * 
 * By: Liam Strand
 * On: September 2022
 * 
 * For: Scope demo code for CS 11 Lab 01
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

    int user_input;
    cout << "Enter a number: ";
    cin >> user_input;

    if (user_input >= 10) {
        string output_string = "has at least two digits";
    } else if (user_input > 0) {
        string output_string = "is positive";
    } else if (user_input == 0) {
        string output_string = "is zero";
    } else {
        string output_string = "is negative";
    }

    cout << "your number " << output_string << endl;
    /* Uh oh!   This variable ^^^^^^^^^^^^^ is scoped within the *
     * conditional branches above, so we don't have access to it *
     * here in this outer scope.                                 */

    return 0;
}
