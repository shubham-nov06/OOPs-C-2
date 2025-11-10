#include <iostream>
#include <string>
using namespace std;

// Define a class named 'teacher'
class teacher
{
private:
    // Private member variable to store salary
    double salary;

public:
    // Parameterized constructor to initialize name, subject, and department
    teacher(string n, string s, string d)
    {
        name = n;
        subject = s;
        dept = d;
    }

public:
    // Public member variables to store name, department, and subject
    string name;
    string dept;
    string subject;

    // Setter function to set the value of the private member variable 'salary'
    void setsalary(double s)
    {
        salary = s;
    }

    // Getter function to get the value of the private member variable 'salary'
    double getsalary()
    {
        return salary;
    }

    // Function to print the information of the teacher
    void getinfo()
    {
        cout << "Name is " << name << endl;
        cout << "Subject is " << subject << endl;
        cout << "Department is " << dept << endl;
    }
};

int main()
{
    teacher t1("Shubham ", "C++", "Computer science ");
    t1.getinfo(); // method to call function

    return 0;
}
