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
    Node *second = new Node();
    Node *third = new Node();

    head->data = 10;
    second->data =  20;
    third->data = 30;

    head->next = second;
    second->next = third;
    third->next = head; // circular 
    
    Node *temp = head;
    
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);

    return 0;
}