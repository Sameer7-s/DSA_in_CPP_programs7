#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,6,7,3,47};
    int n = 6;

    cout<<"Original array : ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Reversed array : ";
    for(int i = 5;i>=0;i--){
        cout<<arr[i]<<" ";
    }



    return 0;
}