// 2 d vector 

// IMPORTANT KEY POINTS ON 2D Array

/*
********************************************************************************************************
how to create 
vector<vector<int>>vector_name(rows , vector<int>(col,initial))
 vector<vector<int>>arr(rows , vector<int>(col,initial)); 


 1] No of rows ?
 ----------------

 Rows = arr.size() -- total rows 
 cols = arr[0].size() -- it tells us how mant col in present in a 2 d array column

 Total element = rows * col;
*********************************************************************************************************
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr(5,2); // if we initialize array with in starting so array capcity will be same 
    cout<<"before capacity size :"<<arr.capacity()<<endl;
    arr.push_back(7);
    cout<<"after capacity size  : "<< arr.capacity()<<endl;
    for(auto x:arr)
    cout<<x<<" ";

    return 0;
}


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;  
// int main(){
//     int arr[4][4]; 
//     vector<vector<int>>arr(rows , vector<int>(col,initial)); // 2D vector array 
//     arr.push_back(7);
//     cout<<"after capacity size  : "<< arr.capacity()<<endl;
//     for(auto x:arr)
//     cout<<x<<" ";

//     return 0;
// }  

