#include<iostream>
#include<string>
using namespace std;
int main(){
    // length
    // apend()
    //substr(start , length)
    //find()
    // replace();
    string str1  = "Hello";
    string str2 = "World";

    // length()
    cout<<"String length : "<<str1.length()<<endl;

    // append()
    cout<<"Append string : "<<str1.append(str2)<<endl;

    // substr
    cout<<"Substring : "<<str2.substr(1,3)<<endl;

    //find()
    cout<<"Position of W : "<<str2.find("W")<<endl;

    // replace 
    // syntax replace(start, length , "new string")
    str1.replace(0,5,"Hii ");
    cout<<"Replace string : "<<str1<<endl;
    return 0;
}