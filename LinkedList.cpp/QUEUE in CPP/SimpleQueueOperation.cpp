// #include<iostream>
// using namespace std;

// #define SIZE 5

// int q[SIZE],front = -1 , rear = -1;

// // enque operation for inserting the value 

// void enqueue(int value){
//     q[++rear] = value;

//     if(front == -1) // if this is first element 
//         front = 0;// set front to 0
//     cout<<value <<" Pushed into the stack"<<endl;
// }
// //dequeue operation deleting element from queue

// void dequeue(){
//     cout<<q[front]<<" deleted \n";
//     front++;
// }
// void peek(){
//     cout<<"Front :"<<q[front]<<endl;
// }

// int main(){
//     enqueue(30);
//     enqueue(12);
//     enqueue(33);
//     enqueue(38);

//     peek();
//     dequeue();
//     peek();
// }


// #include<iostream>
// using namespace std;

// int fib(int n){
//     if(n<=1)
//         return n;
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     for(int i = 0;i<6;i++){
//         cout<< fib(i)<<endl;
//     }

// }

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;

    // Insert at beginning
    Node* a = new Node{10, head};
    head = a;

    // Insert at end
    Node* b = new Node{20, NULL};
    head->next = b;

    // Insert at specific location
    Node* c = new Node{15, head->next};
    head->next = c;

    // Delete node 15
    Node* temp = head->next;
    head->next = temp->next;
    delete temp;

    // Traverse
    for(Node* t = head; t != NULL; t = t->next)
        cout << t->data << " ";

    return 0;
}