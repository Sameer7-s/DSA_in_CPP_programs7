#include<iostream>
using namespace std;

class Stack{

    int *arr, size, top;

public:

    Stack(int s){
        size = s;
        top = -1;
        arr = new int[size];
    }

    // Push operation
    void push(int value){

        if(top == size - 1){
            cout << "Stack Overflow\n";
            return;
        }

        arr[++top] = value;
        cout << value << " Pushed into stack\n";
    }

    // Pop operation
    void pop(){

        if(top == -1){
            cout << "Stack Underflow\n";
            return;
        }

        cout << arr[top] << " Popped from stack\n";
        top--;
    }

    // Peek operation
    void peek(){

        if(top == -1){
            cout << "Stack is Empty\n";
            return;
        }

        cout << "Top Element : " << arr[top] << endl;
    }

    // Display operation
    void display(){

        if(top == -1){
            cout << "Stack is Empty\n";
            return;
        }

        cout << "Stack Elements : ";

        for(int i = top; i >= 0; i--){
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    // Destructor
    ~Stack(){
        delete[] arr;
    }
};

int main(){

    Stack s(6);

    s.push(2);
    s.push(34);
    s.push(56);

    s.peek();

    s.display();

    s.pop();

    s.display();

    return 0;
}