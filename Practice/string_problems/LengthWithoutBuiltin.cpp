#include<iostream>
using namespace std;
int main()
{
    string str = "HelloWorld";
    int length = 0;
    for(int i = 0;i<str[i] != '\0';i++){
        
        length++;
    }
    cout<<"String length : "<<length;


    return 0;
}