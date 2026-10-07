//deletion at last node
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

int main(){

    int arr[] = {10,20,30};

    Node* head = NULL;

    for(int i=0;i<3;i++){
        Node* temp = new Node(arr[i]);
        temp->next = head;
        head = temp;
    }

    Node* temp = head;

    while(temp->next->next != NULL)
        temp = temp->next;

    delete temp->next;
    temp->next = NULL;

    temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}