#include<iostream>
using namespace std; 
int main(){
    int arr[] = {10,15,25,30,35};
    int key = 25;
    for(int i = 0;i<5;i++){
        if(arr[i] == key){
            cout<<"Element found at position : "<<i+1<<endl;
            return 0;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}