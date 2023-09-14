#include<iostream>
#include<cstring>
using namespace std;
struct student
{
    char name[50];
    int age;
    float mark;
};

int main()
{
    student *ptr;
    ptr = new student;

    strcpy(ptr -> name,"Tarek");
    ptr ->age = 22;
    ptr ->mark = 90;
    // Print the values of the structure members using direct member access
    cout << "Using direct member access:" << endl;
    cout << "Name : " << ptr ->name << endl;
    cout << "Age : " << ptr -> age << endl;
    cout << "Mark : " << ptr -> mark << endl;

    return 0;
}