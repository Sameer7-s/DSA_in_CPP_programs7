#include<iostream>
using namespace std;
int main()
{
  
    string str;
    bool palindrome = true;

    cout<<"Enter String : "<<endl;
    cin>>str;

    int len = str.length();

    for(int i = 0; i<len/2;i++){
        if(str[i] != str[len-i-1]){
            palindrome = false;
            break;
        }
    }
    if(palindrome){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }

    return 0;
}