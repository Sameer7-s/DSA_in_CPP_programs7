// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {10,2,4,9,6};
//     int n = 5, key = 5;
//     int pos = 2;

//     // Shift elements to the right
//     for(int i = n; i > pos; i--){ 
//         arr[i] = arr[i-1];
//     }
//     // Insert at position
//     arr[pos] = key;
//     n++;
    
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,5,8,6,7};
    int key = 10;
    int n = 5;
    int pos = 4;
    //shift element to right 
    for(int i = n;i<pos;i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    n++;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}