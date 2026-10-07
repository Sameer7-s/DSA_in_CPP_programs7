#include<iostream>
using namespace std;
int main(){
    int arr1[]  = {1,2,3,4};
    int arr2[] = {5,6,7,8};
    int n1 = 4 ,  n2 = 4;

    cout<<"\nArray 1st : ";
    for(int i = 0;i<n1;i++){
        cout<<arr1[i]<<" ";
    
    }
    cout<<"\nArray 2nd : ";
    for(int i = 0;i<n2;i++){
        cout<<arr2[i]<<" ";
    }

    int merged[n1+n2];
    //copy first array 
    for(int i = 0;i<n1;i++){
        merged[i] = arr1[i];
    }
    //copy second array 
    for(int i = 0;i<n2;i++){
        merged[n1+i] = arr2[i];
    }

    cout<<"\n Merged array : ";
    // print 
    for(int i = 0;i<n1 + n2;i++){
        cout<<merged[i]<<" ";
    }

    
    return 0;
}