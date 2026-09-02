
// Strings in cpp 

// #include<iostream>
// using namespace std;
// int main(){
//     char arr[50];
//     cout<<"Enter the string : ";
//     cin>>arr;
//     cout<<"Entered string is : "<<arr<<endl;
//     return 0;

// }

#include<iostream>
using namespace std;

int main(){
    char str1[94], str2[50];

    cout << "Enter the Str1 : ";
    cin.getline(str1, 94);
    // cout << "Entered string is : " << str1 << endl;

    cout << "Enter the Str2 : ";
    cin.getline(str2, 50);
    cout << "Entered string is : " << str1 <<" " << str2 <<endl;
    return 0;
}

