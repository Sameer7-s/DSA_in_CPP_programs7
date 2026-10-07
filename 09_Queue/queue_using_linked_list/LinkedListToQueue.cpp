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
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void display(){
        Node *current = front;
        while(current != NULL){
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.display();


    return 0;
}

