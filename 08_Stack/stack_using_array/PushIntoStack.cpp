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
        void push(int value){
            if(top == size-1){
                cout<<"Stack is overflow"<<endl;
                return;
            }
            top++;
            arr[top] = value;

            cout<<value <<" Pushed"<<endl;
        }
        void display(){
            cout<<"stack elements : "<<endl;
        
        for(int i = top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }

};



int main(){

    Stack s(5);
    s.push(2);
    s.push(5);
    s.push(23);
    s.push(43);
    s.push(5);

    s.display();

    return 0;
}