
// Merging array without taking input 

#include<iostream>
using namespace std;
int main(){
    int arr1[] = {5,8,4,7};
    int arr[] = {86,7,9,1};
    int size1 = sizeof(arr1)/sizeof(arr[0]);
    int size2 = sizeof(arr1)/sizeof(arr[0]);

    int arr3[size1 + size2];


    // copy arr1 to arr3






    return 0;
}













#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter the size of first array : ";
    cin>>n1;

    int arr1[n1];
    cout<<"Enter Elements of array : ";
    cin>>arr1[n1];

    int n2;
    cout<<"Enter the size of first array : ";
    cin>>n2;

    int arr2[n2];
    cout<<"Enter Elements of array : ";
    cin>>arr2[n2];

    int arr3[n1+n2];
    for(int i = 1 ; i<n1; i++){
        arr3[i] = arr1[i];
    }
    
    for(int i = 1 ; i<n2;i++){
        arr3[n1 + i] =arr2[i];
    }

    cout<<"Merged array ";
    for(int i = 1;i<n1+n2;i++){
        cout<<arr3[i]<<" ";
    }

    cout<<"Programm succesfully executed ";

    return 0;
}














