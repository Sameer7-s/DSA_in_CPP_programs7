#include<iostream>
using namespace std;
int main()
{
    string s1  = "Hello";
    string s2 = "World";

    for(int i = 0;i<s2.length();i++){
        s1 = s1+s2[i];
    }
    cout<<"Concat string : "<<s1<<" ";


    return 0;
}