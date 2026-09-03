#include<iostream>
using namespace std;

class Stack{
    int *arr , size , top;

    public:
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[size];
    }
    // push
    void push(int value){
        if(top == size - 1){
            cout<<"Stack is overflow"<<endl;
            return ;
        }
        arr[++top] = value;
        cout<<value<<" Pushed into the stack "<<endl;
        
    }
    int peek(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    ~Stack(){
        delete[] arr;
    }
};
int main(){
    Stack s(5);
    
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"Peek Element: "<<s.peek();
}
