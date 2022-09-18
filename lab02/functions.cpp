/* functions.cpp
 * 
 * By: Liam Strand
 * On: September 2022
 * 
 * For: Function demo code for lab02 of cs 11
 */

#include <iostream>

using namespace std;

void say_hi(string name);

int main() {
    string user_name;
    cout << "Please enter your name: ";
    cin >> user_name;

    say_hi(user_name);
    
    return 0;
}

/* say_hi
 *    Purpose: Emit a greeting
 * Parameters: The name of the person to be greeted
 *    Returns: none
 *    Effects: Prints to standard output
 */
void say_hi(string name) {
    cout << "Hey there " << name << "!" << endl;
}
