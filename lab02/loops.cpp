/* functions.cpp
 * 
 * By: Liam Strand
 * On: September 2022
 * 
 * For: Function demo code for lab02 of cs 11
 */

#include <iostream>

using namespace std;

void string1();
void string2();
void string3();
void string4();

int main() {
    string1();
    string2();
    string3();
    string4();

    return 0;
}

void string1() {
    string s = "Hello Lab LD!";
                        
    size_t i = 0;
    while (i < s.length()) {
        cout << s[i];
        i++;
    }

    cout << endl;
}

void string2() {
    string s = "Hello Lab LD!";
    
    for (size_t i = 0; i < s.length(); i++) {
        cout << s[i];
    }

    cout << endl;
}

void string3() {
    string s = "Hello Lab LD!";
    size_t num = 0;
    
    for (size_t i = 0; i < s.length(); i++) {
        num++;
    }

    cout << "The number is: " << num << endl;
}

void string4() {
    string s = "Hello Lab LD!";
    size_t num = 0;

    for (size_t i = 0; i < s.length(); i++) {
        num += i;
    }

    cout << "The number is: " << num << endl;
}
