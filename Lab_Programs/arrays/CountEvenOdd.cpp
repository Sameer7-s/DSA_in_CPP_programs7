// #include<iostream>
// using namespace std;
// int  main(){
//     int n;
//     cout<<"Enter Size of array : "<<endl;
//     cin>>n;
//     if(n<=0){
//         cout<<"Invalid input..";
//     }
    
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
//     int evenCount = 0 , oddCount = 0;

//     for(int i = 0;i<n;i++){
//         if(arr[i] % 2 == 0){
//             evenCount++;
//         }else{
//             oddCount++;
//         }
//     }
//     cout<<"\n Even numbers : "<<evenCount<<" ";
//     cout<<"Odd numbers : "<<oddCount<<" ";
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements : ";
    
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    // printing the array 

    cout<<"Array : ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int evenCount = 0 ;
    int oddCount = 0;

    for(int i = 0;i<n;i++){
        if(arr[i]%2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    cout<<"\n Even numbers : "<<evenCount<<endl;
    cout<<"Odd numbers : "<<oddCount<<endl;



    return 0;
}