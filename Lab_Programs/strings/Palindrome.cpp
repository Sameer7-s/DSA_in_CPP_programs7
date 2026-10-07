// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter the string : ";
//     cin>>str;
//     bool palindrome = true;
//     int n = str.length();
//     for(int i = 0;i<n/2;i++){
//         if(str[i] != str[n-1-i]){
//             palindrome = false;
//             break;
//         }
//     }
//     cout<<(palindrome ? "string is palindrome " : "String is not palindrome");
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : "<<" ";
    cin>>str;
    bool palindrome = true;
    int n = str.length();
    for(int i = 0;i<n/2;i++){
        if(str[i] != str[n-1-i]){
            palindrome = false;
            break;
        }
    }
    cout<<(palindrome ? "String are palindrome " : "string are not palindrome ");
    return 0;
}