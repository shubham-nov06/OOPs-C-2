// code for inheritence 
#include <iostream>
#include <string>
using namespace std;

class Person
{

public:
    string name;
    int age;

    // Person(string name, int age)
    // {
    //     this->name = name;
    //     this->age = age;
    // }
    Person()
    { 
        cout<<"Parent constructor" <<endl;
    }
};

class Student : public Person
{
public:
    int rollno;
    Student () {
        cout<<"Child constructor" <<endl;
    }
    void getinfo()
    {
        cout << "Name is" << name << endl;
        cout << "Age is " << age << endl;
        cout << "Roll no is" << rollno << endl;
    }
};
class car {
public : 
int age , num , sal ; 

car () {
 age = 100 ;
 num = 2000 ;
 sal = 200000000;

}
void print(){
    cout<<age<<endl<<num<<endl<<sal ;
}

};

int main()
{
    Student s1 ;
    s1.name = "shubham";
    s1.age=18;
    s1.rollno= 240160 ;
    s1.getinfo(); 
    car c1 ;
    c1.print() ;
    return 0 ;
}

