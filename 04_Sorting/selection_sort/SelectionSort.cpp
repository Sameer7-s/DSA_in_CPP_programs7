// #include<iostream>
// using namespace std;
// int main(){

//     int arr[] = {11,23,32,1,9};
//     int n = 5;

//     for(int i = 0;i<n-1;i++){
//         int min = i;

//         for(int j = i + 1;j<n;j++){
//             if(arr[j]<arr[min]){
//                 min = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = min;
//         min = temp;
//     }
//     cout<<"sorted array : ";
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
int main(){

   int arr[] = {1,42,41,4,1,4,5};
   int n = 7;
   for(int i = 0;i<n-1;i++){
        int min = i;

        for(int j = i+1;j<n;j++){
            if(arr[i]<min){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = min;
        min = temp;
   }
   cout<<"sorted array :";
   for(int i = 0;i<n;i++){
        cout<<arr[i];
   }
   


    return 0;
}