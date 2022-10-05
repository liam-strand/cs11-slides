#include <iostream>

using namespace std;

int main() {
    char string_lit[11] = "Hey there!";
    char array_lit[11]  = {'H', 'e', 'y', ' ', 
                           't', 'h', 'e', 'r', 'e', 
                           '!', '\0'};

    cout << string_lit << endl;
    cout << array_lit << endl;
    
    return 0;
}
