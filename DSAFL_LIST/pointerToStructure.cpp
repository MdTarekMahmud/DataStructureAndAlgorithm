#include <iostream>
#include <cstring> // For string handling

using namespace std;

// Define a structure
struct Student {
    char name[50];
    int age;
    double grade;
};

int main() {
    // Declare a pointer to the structure type
    Student *ptr;

    // Allocate memory for a structure instance using dynamic memory allocation
    ptr = new Student;

    // Initialize the structure members using the pointer
    strcpy(ptr->name, "Tarek");
    ptr->age = 22;
    ptr->grade = 85.5;

    // Print the values of the structure members using direct member access
    cout << "Using direct member access:" << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;
    cout << "Grade: " << ptr->grade << endl;

    // Release the dynamically allocated memory
    delete ptr;
    return 0;
}
