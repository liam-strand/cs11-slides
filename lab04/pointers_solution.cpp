#include <iostream>
#include <fstream>

using namespace std;

void read_three_ints(string filename, int *num1, int *num2, int *num3);
void mutate_an_int(int *n);

int main() {
    
    int a; 
    int b;
    int c;

    int *a_p = &a;
    int *b_p = &b;
    int *c_p = &c;

    read_three_ints("numbers.txt", a_p, b_p, c_p);
    
    cout << a << " " << b << " " << c << endl;

    mutate_an_int(&a);

    cout << a << " " << b << " " << c << endl;

    return 0;
}

void read_three_ints(string filename, int *num1, int *num2, int *num3) {
    ifstream infile;
    infile.open(filename);

    infile >> *num1 >> *num2 >> *num3;

    infile.close();
}

void mutate_an_int(int *n) {
    *n = 7;
}
