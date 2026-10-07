// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]= {10,20,40,50};
//     int n = 4;
//     for(int i = n;i>0;i--){
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = 5;
//     n++;
//     arr[n] = 1;
//     n++;
//     cout<<"Array ";
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int arr[10] = {10,20,30,40,50};
    int n = 5;
    for(int i = n;i>0;i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = 5;
    n++;
    arr[n] = 1;
    n++;
    cout<<"Array : ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}