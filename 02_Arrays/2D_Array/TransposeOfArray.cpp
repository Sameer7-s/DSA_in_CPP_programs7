// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3];
//     for(int i = 0;i<3;i++){
//         for(int j = 0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i = 0;i<2;i++){
//         for(int j = i + 1; j<3;j++) {
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     };
//     for(int i=0;i<3;i++) {
//         for(int j = 0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0; 
// }

// // class Solution {
// // public:
// //     void rotate(vector<vector<int>>& matrix) {
// //         int n = matrix.size();
// //         for(int i = 0;i<n;i++){
// //             // transpose of the given matrix
// //             for(int j = i+1;j<n;j++){
// //                 int temp = matrix[i][j];
// //                 matrix[i][j] = matrix[j][i];
// //                 matrix[j][i] = temp;
// //             }
// //         }
// //         for(int i = 0;i<n;i++){
            
// //             // reverse every row
// //             int start = 0 , end = n - 1;

// //             while(start<end){
// //                 int temp = matrix[i][start];
// //                 matrix[i][start] = matrix[i][end];
// //                 matrix[i][end] = temp;

// //                 start++;
// //                 end--;
// //             }
// //         }
        
// //     }
// // };


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<vector<int>> matrix = {
//         {1, 2, 3},
//         {4, 5, 6}
//     };

//     cout << "Rows: " << matrix.size() << endl;
//     cout << "Columns: " << matrix[0].size() << endl;
//     cout << "Total elements: " << matrix.size() * matrix[0].size() << endl;

//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//         vector<vector<int>>matrix  = {
//             {12,8,5},
//             {5,5,88}
//         }
// }