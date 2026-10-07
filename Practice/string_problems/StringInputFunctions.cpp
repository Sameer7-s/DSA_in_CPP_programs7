#include<iostream>
using namespace std;
int main()
{
    //cin , getline(cin , str) , cin.get(str,100) , cout

    // cin 
    // does not read the spaces 

    string str1;
    cout<<"Enter a string : ";
    cin>>str1;
    cout<<"Entered string is : "<<str1<<endl;

    cin.ignore();

    // getline 
    //Purpose: Reads an entire line including spaces.
    string str2;
    cout<<"Enter a full string :  ";
    getline(cin , str2);
    cout<<"You entered : "<<str2<<endl;
    
    // cin.get()
    char str3[100];
    cout<<"Enter a string : ";
    cin.get(str3,100);
    cout<<"You entered : "<<str3;


    return 0;
}