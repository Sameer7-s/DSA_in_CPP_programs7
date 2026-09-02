// #include<iostream>
// using namespace std;
// int main(){
//     char str[100];
//     int length = 0;
//     cout<<"Enter a string : ";
//     cin>>str;
//     while(str[length]!= '\0'){
//         length++;
//     }
        
//     cout<<"Length of string = "<<length;
// }
// this will read all the space also 

// #include<iostream>
// using namespace std;

// int main() {
//     char str[100];
//     int length = 0;

//     cout << "Enter a string : ";
//     cin.getline(str, 100);

//     while(str[length] != '\0') {
//         length++;
//     }

//     cout << "Length of string = " << length;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char str[100];
//     cout<<"Enter a string : ";
//     cin>>str;
//     for(int i = 0,str[i] != '\0';i++){
//         if(str[i]>='a'&&str[i]<='z')
//          str[i] = str[i]-32;
//          else if(str[i])

//     }
       
// }

// #include<iostream>
// using namespace std;
// int main() {
//     char str[100];
//     int length = 0;

//     cout<< "Enter a string : ";
//     int rev = 0;
//     for(int i = 0;i<length;i++){
//         int ld =length % 10;
//         rev = ld*10 + length;
//     }


//     cout << "reversed string = " << rev;
// }



#include<iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string : ";
    cin.getline(str, 100);

    int length = 0;

    // Find length
    while(str[length] != '\0') {
        length++;
    }

    for(int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    

    return 0;
}