// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node *prev;

//     Node(int value){
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };

// int main()
// {
//     Node *head = new Node(20);

//     // insert at begining 
//     Node *first = new Node(10);
//     first->next = head;
//     head->prev = first;
//     head = first;

//     // insert at last 
//     Node *last = new Node(30);

//     Node *temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = last;
//     last->prev = temp;

//     // display 

//     temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};
int main()
{
    Node *head = new Node(20);

    // insert at starting
    Node *first = new Node(10);
    first->next = head;
    head->prev = first;
    head = first;

    Node *last = new Node(30);
    Node *temp = head;

    // insert at end 
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = last;
    last->prev = temp;

    temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}