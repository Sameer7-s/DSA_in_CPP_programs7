// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of Array : "<<endl;
//     cin>>n;

//     if(n<=0){
//         cout<<"Invalid input........"<<endl;
//         return 0;
//     }
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     int max = arr[0];
//     int min = arr[0];

//     for(int i = 0;i<n;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     cout<<"\n Maximum element is : "<<max<<endl;
//     cout<<"Mininmum element is : "<<min<<endl;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array element : ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    
    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Min : "<<min<<" ";
    cout<<"Max : "<<max<<" ";



}

