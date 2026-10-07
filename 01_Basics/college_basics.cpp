// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter array elements: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     int smallest = arr[0];
//     int greatest = arr[0];   // variable for largest element

//     for(int i = 1; i < n; i++){

//         if(arr[i] < smallest){
//             smallest = arr[i];   // update smallest
//         }

//         if(arr[i] > greatest){
//             greatest = arr[i];   // update greatest
//         }

//     }

//     cout << "Smallest element is: " << smallest << endl;
//     cout << "Greatest element is: " << greatest;

// }

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter array elements: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum = sum + arr[i];
//     }

//     // float avg = (float)sum / n;
//     float avg  = (float)sum / sizeof n;

//     cout << "Sum of array elements: " << sum << endl;
//     cout << "Average of array elements: " << avg << endl;

//     return 0;
// }

// /// wap to print linear search operation 

// #include<iostream>
// using namespace std;

// int main() {
//     int n, key;

//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter array elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter element to search: ";
//     cin >> key;

//     for(int i = 0; i < n; i++) {
//         if(arr[i] == key) {
//             cout << "Element found at position: " << i + 1;
//             return 0;
//         }
//     }

//     cout << "Element not found";

//     return 0;
// }



// // remove duplicate elements from an array 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;

//     int arr[n];
//     for(int i = 0; i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<"Enter the element to search : "<<endl;
//     return 0;
// }

// bubble sort 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]  = {5,2,3,4,6};
//     int n = 5;

//     for(int i = 0;i<n-1; i++){
//         for(int j = 0; j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] =  temp;
//             }
//         }
//     }

//     for(int i = 0; i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//bubble 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]  = {2,1,8,3,9};
//     int n = 5;
//     for(int i = 0; i<n-1;i++){
//         for(int j = 0; j <n -i- 1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;

//             }
//         }
//     }
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// selection sort 


/*
Structure 
for(){
    for()
        swap{
                 }
    for(){
                }
            }




*/

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {5,8,9,4,3,1,0,5};
//     int n = 8;
//     for(int i = 0;i<n-1;i++){
//         int min_key = i;

//         for(int j = i+1;j<n;j++){
//             if(arr[j]<arr[min_key]){
//                 min_key = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[min_key];
//         arr[min_key] = temp;
//     }
//     for(int i = 0; i<n;i++){
//         cout<<arr[i]<<" ";
//     }    
// }
//  INSERTION SORT 

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string str = "hello";
//     string str2 = "world";

//     // Length / Size
//     cout << "Length: " << str.length() << endl;
//     cout << "Size: " << str.size() << endl;

//     // Access characters
//     cout << "First character: " << str[0] << endl;

//     // Concatenation
//     string result = str + str2;
//     cout << "Concatenation: " << result << endl;

//     // Substring
//     cout << "Substring: " << str.substr(1, 3) << endl;

//     // Find
//     cout << "Position of e: " << str.find("e") << endl;

//     // Compare
//     if(str == "hello")
//         cout << "Strings are equal" << endl;

//     // Reverse
//     reverse(str.begin(), str.end());
//     cout << "Reversed string: " << str << endl;

//     return 0;
// }


// getline
// #include<iostream>
// #include<string>
// using namespace std;
// int main() {
//     string full_name;
//     getline(cin,full_name);
//     cout<<"Your full name is : "<<full_name;
// }

// length 
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){

//     string str = "hello";
//     cout<<"Length of string : "<<str.length();

// }

// append 
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){

//     string str1 = "Hello ";
//     string str2 = "World";
//     str1.append(str2);
//     cout<<str1;

// }


//substr()
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "hello";
//     cout<<str.substr(1,3)<<endl;

//     // find 
//     cout<<str.find('o');
    
// }
// compare

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str1 = "hello";
//     string str2 = "hello";
//     cout<<str1.compare(str2);
//     return 0;
// }

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
    
//     string str = "Hello";
//     reverse(str.begin(),str.end());
//     cout<<str;
//     return 0;
// }
// write a cpp program to find the lenght of the str without len function
// #include <iostream>
// using namespace std;

// int main() {
//     char str[100];
//     int length = 0;
    
//     cout << "Enter a string: ";
//     cin.getline(str, 100);
    
//     // Counting characters until null character '\0' is found
//     while (str[length] != '\0') {
//         length++;
//     }
    
//     cout << "Length of the string is: " << length << endl;
    
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     string str;
//     int vowels = 0, consonants = 0, digits = 0;

//     cout << "Enter a string: ";
//     getline(cin, str);

//     for (int i = 0; i < str.length(); i++) {
//         char ch = tolower(str[i]);

//         // Check for alphabets
//         if (ch >= 'a' && ch <= 'z') {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//                 vowels++;
//             } else {
//                 consonants++;
//             }
//         }
//         // Check for digits
//         else if (ch >= '0' && ch <= '9') {
//             digits++;
//         }
//     }
//     cout << "Vowels: " << vowels << endl;
//     cout << "Consonants: " << consonants << endl;
//     cout << "Digits: " << digits << endl;

//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') { // Check if character is lowercase
            str[i] = str[i] - 32;  // Convert to uppercase
            // str[i] = str[i] +32;  // converts to lower case 
        }
    }
    cout << "Uppercase string: " << str << endl;
    return 0;
}


