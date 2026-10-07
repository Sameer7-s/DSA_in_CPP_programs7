
#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cin>>arr[i][j];
        }
    }
   
    int min = arr[0][0];
    int max = arr[0][0];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            if(arr[i][j] <min){
                cout<<min;
            }
            else{
                cout<<max;
            }
        }
    }

    // cout<<sum<<" ";
}