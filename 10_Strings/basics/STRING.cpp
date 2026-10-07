// string in cpp 


// apend function //  size function 
// s.push_back('s') , s = s+'s';//s.pop_back
// sort(str.begin(),str.end()) /// for sorting


// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string str;
//     cin>>str;
//     cout<<str<<endl;
//     cout<<str.size()<<" ";
//     cout<<str[0]<<" ";

    
//     return 0;   
// }


// 2

// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string str = "Sameer is a good boy ";
//     cout<<str<<endl;
//     cout<<str.size();


//     return 0;   
// }

//p3

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     // it doesnot count the space  for this use getline
//     string str;
//     cin>>str;
//     cout<<str;
//     return 00;
// }

// getline 

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     string str;
//     getline(cin,str);
//     cout<<str;
//     return 0;
// }

// inputing the 2 string

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     string str1 , str2;
//     getline(cin,str1);
//     getline(cin,str2);
//     cout<<str1<<" "<<str2;
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     string str = "Sam is a \"Good\" boy";
//     string str2 = "Sam is a \\Good\\ boy";
//     cout<<str<<endl;
//     cout<<str2;
//     return 0;     
// }  


// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// int main(){
    
//     string str1 = "Sameer";
//     string str2 = "Singh";
//     // str1 = str1+" "+str2;
//     // cout<<str1; // it combine the str1  str2 
//     str1.pop_back();// delete the 1 last element from  string 
//     cout<<str1;

//     return 0;
// }


// sorting  

// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
    
//     string str1 = "Sameer";
//     string str2 = "Singh";
//     sort(str1.begin(),str1.end());
//     reverse(str2.begin(),str2.end());

//     cout<<str1<<endl<<str2;

//     return 0;
// }


// push_back function

// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
    
//     string str1 = "Sameer";
//     string str2 = "Singh";
//     str1.push_back('A');
//     cout<<str1<<endl;

//     return 0;
// }


// sorting a string with O(n) TC

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     int n = s.size();
//     int count[26];

//     // initialize frequency array
//     for (int i = 0; i < 26; i++) {
//         count[i] = 0;
//     }

//     // count frequency of each character
//     for (int i = 0; i < n; i++) {
//         int index = s[i] - 'a';
//         count[index]++;
//     }

//     // print characters in sorted order
//     for (int i = 0; i < 26; i++) {
//         for (int j = 0; j < count[i]; j++) {
//             char c = 'a' + i;   // fixed: char, not chat
//             cout << c;
//         }
//     }

//     return 0;
// }

 