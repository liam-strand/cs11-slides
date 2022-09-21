/* array_args.cpp
 * 
 * By: Liam Strand
 * On: September 2022
 * 
 * For: A demo of passing arrays as arguments (by value).
 */

#include <iostream>

using namespace std;

void print_array(int arr[], size_t len);
void change_array(int arr[], size_t idx, int val);

int main() {
    
    int integers[10] = {0, 1, 2, 3, 4, 0, 2, 4, 6, 8};

    print_array(integers, 10);
    change_array(integers, 3, -1);
    print_array(integers, 10);

    return 0;
}

/* print_array
 *    Purpose: Prints a string representation of an array
 * Parameters: An array of integers and its length
 *    Returns: none
 *    Effects: Prints to standard output
 */
void print_array(int arr[], size_t len) {
    /* TODO implement this function */
}

/* change_array
 *    Purpose: Updates an element in the array
 * Parameters: An array of integers an index, and a value
 *    Returns: none
 *    Effects: Modifies the element in the array at the index
 */
void change_array(int arr[], size_t idx, int val) {
    arr[idx] = val;
}
