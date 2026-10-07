#include<iostream>
#include<string>
using namespace std;
int main()
{
    //length append substr
    string str = "Hello";
    cout<<"length of string : "<<str.length()<<endl;

    //apend
    str.append("World");
    cout<<"Appended string : "<<str<<endl;

    // substr

    cout<<"Substring : "<<str.substr(2,5)<<endl;



    return 0;
}