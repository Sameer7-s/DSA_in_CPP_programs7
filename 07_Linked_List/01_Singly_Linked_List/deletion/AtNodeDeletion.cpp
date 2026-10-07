//delete a node from a singly linked list when only the pointer to that node is given.
// The head pointer of the linked list is not provided.



#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

void deleteNode(Node* node){

    node->data = node->next->data;

    Node* temp = node->next;

    node->next = temp->next;

    delete temp;
}

int main(){

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    // delete 20
    deleteNode(head->next);

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}