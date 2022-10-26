/* heap_bug.cpp
 * 
 * By: Liam Strand
 * On: October 2022
 * 
 * For: A bug-finding mission, should you choose to accept it.
 */

#include <iostream>
#include <fstream>

using namespace std;

int *read_ints(string filename, int *len_p);
int  largest_int(int nums[], int length);
void print_result(int num);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cerr << "I need exactly one filename pls!" << endl;
        return 1;
    }

    /* Read the numbers in the file provided on the command line */
    int len;
    int *numbers = read_ints(argv[1], &len);

    /* We need to check that the read went well, otherwise sadness */
    if (numbers == nullptr) {
        cerr << "There was some issue reading the file" << endl;
        return 1;
    }

    /* Calculate the largest number in the array and print it */
    int largest = largest_int(numbers, len);
    print_result(largest);

    return 0;
}

/* read_ints
 *    Purpose: Reads a file of integers into an array and returns it, returning
 *             the array's length indirectly.
 * Parameters: The name of a file of integers; the first integer in the file is 
 *             the number of remaining integers. The address of where to store 
 *             the length of the array
 *    Returns: A pointer to an array of integers
 *    Effects: Modifies the integer pointed to by the second argument.
 */
int *read_ints(string filename, int *len_p) {

    /* Open the file and check for errors */
    ifstream input_file;
    input_file.open(filename);

    if (!input_file.is_open()) {
        cerr << "I could not open the file" << endl;
        return nullptr;
    }

    /* Read the number of integers stored in the file */
    int length;
    input_file >> length;

    /* Get an array of the appropriate size */
    int nums[length];

    /* Read through the file and store each number in the array */
    for (int i = 0; i < length; i++) {
        input_file >> nums[i];
    }

    /* Don't forget to close the file (it's good practice!) */
    input_file.close();

    /* Store the length of the array in the integer at  *
     * the end of this pointer, indirectly returning it */
    *len_p = length;

    /* Directly return all the integers we just read */
    return nums;
}

/* largest_int
 *    Purpose: Finds the largest integer in an array
 * Parameters: An array of integers and that array's length
 *    Returns: The largest integer in the input array
 *    Effects: none
 */
int largest_int(int nums[], int length) {
    
    /* INT_MIN is the smallest possible integer. */
    int largest = INT_MIN;

    /* Iterate through the array. If we see a larger integer than the largest *
     * we've seen so far, update that variable and keep on searching.         */
    for (int i = 0; i < length; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    return largest;
}

/* print_result
 *    Purpose: Prints the result of all this work.
 * Parameters: An integer to print
 *    Returns: none
 *    Effects: Prints to standard output.
 */
void print_result(int num) {
    cout << "The largest number is: " << num << endl;
}
