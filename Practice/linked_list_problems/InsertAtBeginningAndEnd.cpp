#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

};
int main()
{
    Node *head = new Node();
    head->data = 20;
    head->next = NULL;

    // insert at begining 

    Node *first = new Node();
    first->data = 10;
    first->next = head;
    head = first;

    // insert at last 
    Node *last = new Node();
    last->data = 30;
    last->next = NULL;

    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = last;

    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}