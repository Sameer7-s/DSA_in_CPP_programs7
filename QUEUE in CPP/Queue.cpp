// // push    --- peeche se push (last se)
// // pop     --- first se delete (front se)
// // front   --- front me kon khada h (start)
// // isFull  --- queue full hai ya nahi (full - 1, not full - 0)
// // isEmpty --- queue khali hai ya nahi (empty - 1, not empty - 0)

// // FCFS first come first serve
// // FIFO first in first out

// #include <iostream>
// using namespace std;
// class Queue {
//     int *arr;
//     int front, rear, size;

// public:
//     // declaring the constructor
//     Queue(int n) {
//         arr = new int[n];
//         size = n;
//         front = rear = -1;
//     }

//     ~Queue() {
//         delete[] arr;
//     }

//     // checking the queue is empty or not
//     bool IsEmpty() {
//         return front == -1;
//     }

//     // checking the queue is full or not
//     bool IsFull() {
//         return rear == size - 1;
//     }
//     // Push element into the queue, in end
//     void push(int x) {
//         // full
//         if (IsFull()) {
//             cout << "Queue is overflow\n";
//             return;
//         }
//         // empty
//         if (IsEmpty()) {
//             front = rear = 0;
//         } else {
//             rear = rear + 1;
//         }
//         arr[rear] = x;
//         cout << "Pushed " << x << " into the Queue\n";
//     }
//     // Pop element from the queue, from front
//     void pop() {
//         // empty
//         if (IsEmpty()) {
//             cout << "Queue is underflow\n";
//             return;
//         }
//         cout << "Popped " << arr[front] << " from the Queue\n";
//         if (front == rear) {
//             front = rear = -1;
//         } else {
//             front = front + 1;
//         }
//     }
//     // Return front element
//     int start() {
//         if (IsEmpty()) {
//             cout << "Queue is empty\n";
//             return -1;
//         }
//         return arr[front];
//     }
// };
// int main() {
//     Queue q(5);

//     q.push(10);
//     q.push(20);
//     q.push(-30);

//     cout << "Front element is " << q.start() << endl;

//     q.pop();
//     q.pop();

//     cout << "Front element is " << q.start() << endl;

//     return 0;
// }



// #include<iostream>
// using namespace std;
// class Queue{
//     int *arr;
//     int front , rear , size;


// public : 

//     // constructors 
//     Queue(int n){
//         arr = new int[n];
//         size = n;
//         front = rear = -1;
//     }
//     ~Queue(){
//         delete[] arr;
//     }
//     bool IsEmpty(){
//         return front == -1;
//     }
//     bool IsFull(){
//         return rear == size - 1;
//     }
//     //push 
//     void push(int x){
//         if(IsFull()){
//             cout<<"Queue is overflow\n";
//             return;
//         }
//         if(IsEmpty()){
//             front = rear = 0;
//         }else{
//             rear = rear + 1;
//         }
//         arr[rear] = x;
//         cout<<"Pushed "<<x<<" Into the Queue\n";
//     }
//     // pop 
//     void pop(){
//         if(IsEmpty()){
//             cout<<"Queue is undereflow\n";
//             return;
//         }
//         cout<<"popped "<<arr[front]<<" From the Queue\n";

//         if(front== rear){
//             front = rear + 1;
//         }else{
//             front = front + 1;
//         }
//     }
//     // peak
//     int start(){
//         if(IsEmpty()){
//             cout<<"Queue is Empty\n";
//             return -1;
//         }
//         return arr[front];
//     }
// };
// int main(){
//     Queue q(5);

//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(50); // this is over flow 

//      cout<<"Front Element is "<<q.start()<<endl;
//      q.pop();
//      cout<<"Front Element is "<<q.start()<<endl;

    

// }

#include<iostream>
using namespace std;

#define SIZE 5 
int q[SIZE] , front = -1 , rear = -1;

void enqueue(int value){
    q[++rear] = value;
    if(front == -1)
        front = 0;
    cout<<value<<" Pushed into the queue \n";
}
void dequeue(){
    cout<<q[front]<<" popped out \n";
    front++;
}
void peek(){
    cout<<q[front]<<" top element \n";

}
int main(){
    enqueue(5);
    enqueue(7);
    enqueue(8);
    peek();
    dequeue();
    peek();
}




































