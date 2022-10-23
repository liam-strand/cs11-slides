/* demo_starter.cpp
 * 
 * By: Liam Strand
 * On: October 2022
 */
#include <iostream>

using namespace std;

const int MAX_STUDENTS = 50;

struct Student {
    string name;
    float gpa;
    char grade;
};

struct Course {
    Student students[MAX_STUDENTS];
    int num_students;
    string name;
    string instructor;
    int cs_dpt_id;
};

void init_cs11(Course *c);
void init_cs15(Course *c);
void initialize_empty_students(Course *c);
void print_course(Course *c);

int main() {

    Course *courses = new Course[2];
    
    init_cs11(&courses[0]);
    init_cs15(&courses[1]);
    
    print_course(&courses[0]);
    cout << endl;
    print_course(&courses[1]);

    delete [] courses;

    return 0;
}

void initialize_empty_students(Course *c) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        Student s;
        s.gpa = 0.0;
        s.grade = '\0';
        s.name = "";
        c->students[i] = s;
    }
}

void init_cs11(Course *c) {
    initialize_empty_students(c);

    c->cs_dpt_id = 11;
    c->name = "Introduction to Computer Science";
    c->instructor = "Richard Townsend";
    c->num_students = 4;

    c->students[0] = (Student){"Caleb",   1.7, 'D'};
    c->students[1] = (Student){"Dana",    3.8, 'B'};
    c->students[2] = (Student){"Jackson", 4.1, 'A'};
    c->students[3] = (Student){"Sydney",  3.5, 'C'};
}

void init_cs15(Course *c) {
    initialize_empty_students(c);

    c->cs_dpt_id = 15;
    c->name = "Data Structures";
    c->instructor = "Milod Kazerounian";
    c->num_students = 3;

    c->students[0] = (Student){"Annika", 3.8, 'B'};
    c->students[1] = (Student){"Roger",  7.9, 'A'};
    c->students[2] = (Student){"Skylar", 0.8, 'F'};
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
