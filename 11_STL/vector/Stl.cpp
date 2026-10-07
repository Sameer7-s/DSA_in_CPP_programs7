// STL 
/*
Standard temporary Library 

it help in coding when know about the algorthim already it helps to modiefies the program 
and makes code optimized 

uses 

array -- dynamic 


 
Normally we declare an array int arr[n];

1] VECTOR

vector<int>value 

// OPERATION THAT PERFORM IN VECTORS 
*********************************************************************************
1 -- insert : push_back , arr.push_back(element)
2 -- delete : pop_back , arr.pop_back(element)
3 -- size : arr.size() -- tells the how many element present in an array 
4 -- arr.front(); , arr[0] -- tell the front element 
5 -- arr[n - 1] , arr.back() -- used to find the last element of an array
6 -- arr.clear() , clear -- it'll clear the array completely 
********************************************************************************

// IMPORTANT PROPERTY VECTOR 

    * Vector size(capacity) :  0 , 1  , 2 , 4 , 8 , 16 , 32 
     --------- pattern the capacity get doubled of the current size 

     starting array 
     1 
     1 2 
     now we want to insert the 3rd value 
     so it will double the size 
    1 2 3 4 
    now same for 5 
    1 2 3 4 
    1 2 3 4  _  _  _  _
    1 2 3 4 5  6  7 8 // now here it stores the values till 8 
    after 8 to 16 
    it will again make the current size to double 
    1 2 3 4 5 6 7 8    _ _ _ _ _  _ _ _ _  _
    1 2 3 4 5 6 7 8    9 10 11 12 13 14 15 16






*/

// way 1

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     vector<int>v;
//     for(int i = 1; i<=10;i++){
//         v.push_back(i);
//     }
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

// way 2 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>v;
//     for(int i = 1;i<=10;i++){
//         v.push_back(i);
//     }
//     for(auto x:v){ // automatic [jo v  first element hai vo x ke andar  dal do bari bari se ]
//         cout<<x<<" ";
//     }
//     return 0;
// }

// case 3 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     vector<int>v;
//     for(int i = 1;i<=10;i++){
//         v.push_back(i*13%10);
//     }
    
//     // sort(v.begin(),v.end());// for arrange in a sorted way 0 1 2 3 4 5 6 7 8 9 
//     // sort(v.rbegin(),v.rend());  // for reverse print 9 8 7 6 5 4 3 2 1 0 
//     sort(v.rbegin(),v.rend(),greater<int>()); // sort in the descending 9 8 7 6 5 4 3 2 1 0 
//     // time complexity will be n log n 
//     for(int i = 0 ; i < v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return 0; 
// }

// case 4 


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     vector<int>v;
//     for(int i = 1;i<=10;i++){
//         v.push_back(i*13%10);
//     }
//     v.pop_back(); // remove the element from array 
//     v.pop_back();  // removing 
//     cout<<"Size :"<<v.size()<<endl;  // size become 10 to 8 
//     cout<<"Capacity :"<<v.capacity()<<endl;
   
//     for(int i = 0 ; i < v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return 0; 
// }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<vector<int>>arr(3,vector<int>(3));

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0;i<3;i++){
        sort(arr[i].begin(),arr[i].end());
    }

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
