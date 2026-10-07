#include<iostream>
using namespace std;

class Stack{
    int arr[5];
    int top = -1;

    public:
        void push(int value){
            if(top == 4) 
                cout<<"overflow\n";
            else{
                arr[++top] = value;
                cout<<value<<"inserted \n";
            }
        }
        void pop(){
            if(top ==-1)
                cout<<"Stack is underflow \n";
            else{
                cout<<arr[top]<<" deleted\n";
                top--;
            }
        }
        void peek(){
            if(top == -1)
                cout<<"Stack is empty\n";
            else{
                cout<<"Top element : "<<arr[top]<<endl;
            }
        }
        void display(){
            if(top == -1)
                cout<<"stack is Empty\n";
            else{
                cout<<"stack :";
                for(int i = top;i>=0;i--){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
};
int main()
{
    Stack s;
    int choice , value;

    do{
        cout<<" \n1.push";
        cout<<" \n2.pop";
        cout<<" \n3.peek";
        cout<<" \n4.display";
        cout<<" \n5.Exit";

        cout<<"\nEnter choice : ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter value : ";
            cin>>value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            s.display();
            break;
        case 5:
            cout<<"Exit";
            break;
        default:
            cout<<"Invalid choice \n";
        }
    }while(choice!=5);
    return 0;
}