#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    
        for(int i = 0; i<n;i++){
            cout<<"Enter the elements of arrays  " << i << " : ";
            cin>>arr[i];
        }
    

    cout<<"array elements are : ";
    
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }

    return 0;
}