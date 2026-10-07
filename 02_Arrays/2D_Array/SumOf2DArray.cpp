#include<iostream>
using namespace std;
int main(){
    int arr[3][5];
    for(int i = 0; i<3;i++){
        for(int j = 0; j<4;j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            sum = sum + arr[i][j];
        }
        
    }
    cout<<"Sum of i and j  is : "<<sum;  // time complexity O(n^2)  [row*col]
    return 0;

}