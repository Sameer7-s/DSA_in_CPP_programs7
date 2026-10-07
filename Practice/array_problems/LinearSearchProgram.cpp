#include<iostream>
using namespace std;
int main(){
    // simple way without  input 
    int arr[] = {1,3,4,5,3,5,9};
    int key = 4;
    int n = 7; // size of array 
    bool found = false; // assuming element nhi mila 

    for(int i = 0;i<n;i++){
        if(arr[i] == key){
            cout<<"Element found at position : "<<i+1<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"Element not found in the array ";
    }

    return 0;
}