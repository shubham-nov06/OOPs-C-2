#include<iostream>

using namespace std ;
class car {
    public :
    string model ;
    string name  ; 
};
int main ( ){
    car c1;
    c1.name = "BMW";
    c1.model = "2025";
    cout<<"Name is = " <<c1.name;
    cout<<"Brand is = " <<c1.model;


}