#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50};
    int n = 5;
    int k = 2;
    for(int j = 0;j<k;j++){
        int temp = arr[0];
        for(int i = 0;i<n-1;i++){
            arr[i] = arr[i+1];
        }
     arr[n-1] = temp;
    }
    cout<<"array after left rotation : ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}