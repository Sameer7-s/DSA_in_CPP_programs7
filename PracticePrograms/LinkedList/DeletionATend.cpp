#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
int main(){
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 10;
    second->data = 20;
    third->data = 30;
    
    head->next = second;
    second->next = third;
    third->next = NULL;

    // deletion of the last node 
    Node *temp = head;
    while(temp->next != third){
        temp = temp->next;
    }
    delete third;
    temp->next = NULL;

    // traverse and display 
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }




    return 0;
}