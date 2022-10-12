/* demo_starter.cpp
 * 
 * By: Liam Strand
 * On: October 2022
 */
#include <iostream>

using namespace std;

const int MAX_STUDENTS = 50;

struct Student {
    /* TODO */
};

struct Course {
    /* TODO */
};

void init_cs11(Course *c);
void init_cs15(Course *c);
void initialize_empty_students(Course *c);
void print_course(Course *c);

int main() {

    /* TODO */

    return 0;
}

void initialize_empty_students(Course *c) {
    /* TODO */
}

void init_cs11(Course *c) {
    /* TODO */
}

void init_cs15(Course *c) {
    /* TODO */
}

void print_course(Course *c) {
    cout << "CS " << c->cs_dpt_id << ": " << c->name << endl;
    cout << "by: " << c->instructor << endl;
    cout << "with: " << endl;
    for (int i = 0; i < c->num_students; i++) {
        cout << c->students[i].name << " - grade:" 
             << c->students[i].grade << " gpa:" 
             << c->students[i].gpa << endl;
    }
}
