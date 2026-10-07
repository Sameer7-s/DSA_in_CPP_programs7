// #include<iostream>
// using namespace std;

// int main(){
//     char str[] = "Hello World!";
//     int length = 0;

//     while(str[length] != '\0'){
//         length++;
//     }
//     cout<<"Length of string : "<<length;
// }
#include<iostream>
using namespace std;
int main()
{

    string str = "Hello ";
    int len = 0;

    for(int i = 0;str[i] != '\0';i++){
        len++;
    }

    cout<<"Length of string : "<<len<<" ";


    return 0;
}