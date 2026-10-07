// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Size of array : ";
//     cin>>n;

//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     // printing the array 

//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     int sum = 0;
//     float avg = 0.0;
//     for(int i = 0;i<n;i++){
//         sum = sum + arr[i];
//         avg = sum / n;

//     }
//     cout<<"\nSum of array element is : "<<sum<<endl;
//     cout<<"Average is : "<<avg<<endl;



//     return 0;
// }

#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<<"Enter Size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    float avg = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
        avg = float(sum) /n;
    }
    cout<<"Sum : "<<sum<<endl;
    cout<<"Average : "<<avg<<endl;
    





    return 0;
}