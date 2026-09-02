//     // linear datastructure in which insertion & deletion only allowed at the end , called the top of the stack 
//     // 1 push -- insert 
//     //2 pop   -- deletion
//     // 3 peak  -- check the top value from a stack 
//     // overflow -- stack is full
//     // underflow -- stack is empty
//     // Issize -- checks the size 
//     // Isempty -- check the is stack is empty 

//     // principle :  LIFO  [Last  IN     First OUT ]

// #include<iostream>
// using namespace std;

//     // implement with array 
//     class Stack
//     {
//     int *arr , size , top;
//     public : 

//     bool flag;
//     // creating constructor
//     Stack(int s)
//     {
//         size = s;
//         top = -1;
//         arr = new int[s];
//         flag = 1;
//     }

//     // push 
//     // pop
//     // peek
//     // IsEmpty
//     // IsSize

//     // push
//     void push(int value)
//     {
//         if(top == size - 1){
//             cout<<"Stack Overflow\n";
//             return;
//         }
//         else
//         {
//             top++;
//             arr[top] = value;
//             cout<<"Pushed "<< value<<" into the Stack"<<endl;
//             flag = 0;
//         }
//     }
//     // pop  
//     void pop()
//     {
//         if(top==-1)
//         {
//             cout<<"Stack is underflow";
//         }
//         else
//         {
//             cout<<"Popped "<<arr[top]<<" from the stack\n";
//             top--;
//             if(top == -1) 
//             flag = 1;                                                         // cout<<"Popped"<<arr[top+1]<<"from the stack\n" // this is also valid but top + 1 imp
//         }
//     }

//     // peek 

//     int peek()
//      {
//         if(top==-1)
//         {
//             cout<<"Stack is Empty"<<endl;
//             return -1;
//         }
//         else
//         {
//             return arr[top];
//         }
//     }
//     // IsEmpty
//     bool IsEmpty()
//     {
//         return top == -1;
//     }

//     int  IsSize()
//     {
//         return top +1;
//     }
// };

// int main()
// {
//     Stack s(5);

//     cout<<s.peek()<<endl;
//     s.push(-1);

//     cout<<s.peek()<<endl;


//     // int value = s.peek();
//     // if(s.flag == 0){
//     //     cout<<value<<endl;
//     // }
//     return 0;
// }



//operations in stack 
// #include<iostream>
// using namespace std;
// #define SIZE 5
// int stack[SIZE], top = -1;
// void push(int value) {
//     if(top == SIZE - 1)
//         cout << "Stack Overflow\n";
//     else
//         stack[++top] = value;
// }
// void pop() {
//     if(top == -1)
//         cout << "Stack Underflow\n";
//     else
//         cout << stack[top--] << " popped\n";
// }
// int main() {
//     push(10);
//     push(20);
//     push(30);

//     pop();

//     return 0;
// }
// #include<iostream>
// using namespace std;

// #define SIZE 5

// int stack[SIZE], top = -1;

// void push(int value) {
//     if(top == SIZE - 1)
//         cout << "Stack Overflow\n";
//     else
//         stack[++top] = value;
// }

// void pop() {
//     if(top == -1)
//         cout << "Stack Underflow\n";
//     else
//         cout << stack[top--] << " popped\n";
// }

// void peek() {
//     if(top == -1)
//         cout << "Stack is empty\n";
//     else
//         cout << "Top element: " << stack[top] << endl;
// }

// int main() {
//     push(10);
//     push(20);
//     push(30);


//     peek();
//     pop();
//     peek();

//     return 0;
// }

#include<iostream>
using namespace std;
#define SIZE 5

int stack[SIZE], top = -1;

void push(int value){
    if(top == SIZE - 1){
        cout<<"Stack is overflow \n ";
    }else{
        stack[++top] = value;
        cout<<value<<" Pushed into the stack \n";
    }
}
    void pop(){
        if(top == -1){
            cout<<"Stack is underflow \n";
        }else{
            cout<<stack[top--]<<" Popped from stack \n";
        }
    }
    void peek(){
        if(top == -1){
            cout<<"Stack is empty";
        }
        else{
            cout<<stack[top]<<" Top in stack \n";
        }
    }

int main(){
    push(3);
    push(5);
    push(8);
    push(9);
    peek();
    pop();

    peek();
}
