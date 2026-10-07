// #include<iostream>
// using namespace std;
// int main(){
//     string s1 = "Hello";
//     string s2 = "";


//     // copy each character from str1 to str2
//     for(int i = 0;s1[i] != '\0';i++){
//         s2 += s1[i];
//     }
//     cout<<"Original string : "<<s1<<endl;
//     cout<<"Copied string : "<<s2<<endl;

//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    string s1 = "Hello";
    string s2 = "";
    for(int i = 0;s1[i] != '\0';i++){
        s2 = s2+s1[i];
    }
    cout<<"Original string : "<<s1<<endl;
    cout<<"Copied string : "<<s1;


    return 0;
}