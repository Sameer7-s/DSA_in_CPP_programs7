#include<iostream>
using namespace std; 
class Node{
    public:
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
class Queue{
    Node *front;
    Node *rear;

public:
        Queue(){
            front = NULL;
            rear = NULL;
        }
    void enqueue(int x){
    Node *newNode = new Node(x);
    if(front == NULL){
        cout<<""
    }
}
}

int main()
{



    return 0;
}