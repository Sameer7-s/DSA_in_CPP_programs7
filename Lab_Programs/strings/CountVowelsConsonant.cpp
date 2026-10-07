// #include<iostream>
// using namespace std;
// int main(){
//     string str = "Hello World";

//     int vowels = 0;
//     int consonants = 0;

//     for(int i = 0;str[i] != '\0';i++){
//         if((str[i]>='A' && str[i]<='Z' )||( str[i]>='a' && str[i]<='z')){
//             if(str[i]=='a'||str[i] == 'i'||str[i]=='e'||str[i] == 'o'||str[i]=='u'||str[i] == 'A'||
//             str[i]=='I'||str[i] == 'E'||str[i]=='O'||str[i] == 'U'){
//                 vowels++;
//             }
//             else{
//                 consonants++;
//             }
//         }
//     }
//     cout<<"Consonants : "<<consonants<<endl;
//     cout<<"Vowels : "<<vowels<<endl;
// }

#include<iostream>
using namespace std;
int main(){
    string str = "Sameer";
    int vowels = 0;
    int consonanats = 0;

    for(int i = 0;i<str[i] != '\0';i++){
        if((str[i]>='a' && str[i]<= 'z' )|| str[i]>= 'A' && str[i]<='Z'){
            if(str[i] == 'a' || str[i] == 'i' ||str[i] == 'e' ||str[i] == 'o' ||str[i] == 'u' ||
            str[i] == 'A' ||str[i] == 'I' ||str[i] == 'E' ||str[i] == 'O' ||str[i] == 'U'){
                vowels++;
            }
            else{
                consonanats++;
            }

        }
    }
    cout<<"Consonants : "<<consonanats<<endl;
    cout<<"Vowels : "<<vowels<<" ";
    return 0;
}