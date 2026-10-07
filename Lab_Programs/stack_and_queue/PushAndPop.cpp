// #include<iostream>
// using namespace std;
// int main(){
//     int stack[5];
//     int top = -1;
//     //push 
//     stack[++top] = 10;
//     stack[++top] = 20;
//     stack[++top] = 30;
//     cout<<"Stack after push : ";
//     for(int i = 0;i<=top;i++){
//         cout<<stack[i]<<" ";
//     }
//     cout<<endl;
//     // pop 
//     cout<<"Popped Element : "<<stack[top]<<endl;
//     top--;
//     cout<<"Stack after pop : ";
//     for(int i = 0;i<=top;i++){
//         cout<<stack[i]<<" ";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int stack[5];
    int top = -1;
    // push 
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;
    cout<<"Stack after pushed : ";
    for(int i = 0;i<=top;i++){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Popped element : "<<stack[top]<<endl;
    top--;

    cout<<"After popped stack : "<<" ";
    for(int i =0;i<=top;i++){
        cout<<stack[i]<<" ";
    }
}