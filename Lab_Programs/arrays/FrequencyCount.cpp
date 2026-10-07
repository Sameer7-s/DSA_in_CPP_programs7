// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1, 2, 1, 3, 2, 2, 2};
//     int n = 7;
//     for(int i = 0; i < n; i++) {
//         bool found = false;
//         // Check if element appeared before
//         for(int j = 0; j < i; j++) {
//             if(arr[i] == arr[j]) {
//                 found = true;
//                 break;
//             }
//         }
//         if(found)
//             continue;
//         int count = 0;
//         for(int j = 0; j < n; j++) {
//             if(arr[i] == arr[j]) {
//                 count++;
//             }
//         }
//         cout << arr[i] << " occurs " << count << " times" << endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,5,8,6,7,8};
    int n = 7;
    for(int i = 0;i<n;i++){
        bool found = false;
        for(int j = 0;j<i;j++){
            if(arr[i] == arr[j]){
                found = true;
                break;
            }
        }
            if(found)
                continue;
            int count = 0;
            for(int j = 0;j<n;j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
            cout<<arr[i]<<" occurs"<<count<<" times"<<endl;
        }
    
    return 0;
}