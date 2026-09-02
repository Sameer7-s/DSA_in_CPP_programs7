// oops in cpp

// classes -- blueprint user defined data-type


// class ---- behaviour
//              state  property 
// object -- real world entity [instance of a class]

#include<iostream>
using namespace std;

class Student
{
    public:// access specifier private , public 
    int roll;
    string name;
    string branch;


};
int main(){

    Student object;
    object.roll = 24;
    object.name = "Sam";
    object.branch = "CSE";
    cout<<object.roll<<" ";

    return 0;
}
