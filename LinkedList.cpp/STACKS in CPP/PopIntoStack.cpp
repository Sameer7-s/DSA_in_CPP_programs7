#include<iostream>
using namespace std;

class Stack{
    int *arr, size , top;

    public:
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[size];
    }
    void push(int value){
        if(top == size - 1){
            cout<<"Stack is overflow \n";
            return;
        }
        arr[++top] = value;
    }
    void pop(){
        if(top == -1){
            cout<<"Stack is underflow\n";
            return;
        }
        cout<<arr[top]<<" Popped from the stack\n";
        top--;
    }
    void display(){
        cout<<"Stack elements : "<<endl;

        for(int i = top;i>=0;i--){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
    // ~Stack(){
    //     delete[] arr;
    // }
};


int main()
{

    Stack s(5);
    s.push(19);
    s.push(12);
    s.push(14);
    s.pop();
    s.display();




    return 0;
}