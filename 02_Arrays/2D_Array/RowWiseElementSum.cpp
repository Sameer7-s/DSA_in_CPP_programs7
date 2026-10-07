
#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cin>>arr[i][j];
        }
    }
   
    for(int i = 0;i<3;i++){
         int sum = 0;
        for(int j = 0;j<4;j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
    }
    // cout<<sum<<" ";
}
/*
7 8 9 7
5 5 1 5
8 8 7 5
31 16 28 
*/


#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
    }
}
/* this will add continue the sumation number 
7 8 9 7 == 31 
5 5 1 5  == 31 + 16 = 47 
8 8 7 5 ==  47 + 28 == 75
31 47 75 */