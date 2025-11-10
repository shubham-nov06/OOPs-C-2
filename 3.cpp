// code for inheritance
#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person
{
public:
    string name; // Name of the person
    int age;     // Age of the person
};

// Derived class Student inheriting from Person
class Student : public Person
{
public:
    int rollno; // Roll number of the student
};

// Derived class gradstudent inheriting from Person
class gradstudent : public Person
{
public:
    string researcharea; // Research area of the grad student
};

int main()
{
    gradstudent s1;                                         // Creating an object of gradstudent
    s1.name = "tony stark ";                                // Setting the name of the grad student
    s1.age = 30;                                            // Setting the age of the grad student
    s1.researcharea = "Quantum";                            // Setting the research area of the grad student
    cout << "Name is " << s1.name << endl;                  // Printing the name of the grad student
    cout << "Research area is " << s1.researcharea << endl; // Printing the research area of the grad student
    cout << "Age is " << s1.age << endl;

    return 0;
}
