// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;

//     //constructor 
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };
// int main(){
//     // creating the first node
//     Node *head = new Node(10);
//     /// New node for inserting at starting 
//     Node *newNode = new Node(5);
//     cout<<"Original linked list : " << head->data<<" "<<newNode->data<<endl;
//     // inserting at start
//     newNode->next = head;
//     head = newNode;

//     // privious linked list 

//     cout<<"after insertion : ";
//     while(head != NULL){
//         cout<< head->data<<" ";
//         head = head->next;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    // constructor creation 
    Node(int value){
        data = value;
        next = NULL;
    }
};
int main(){
    Node *head = new Node(10);
    Node *temp = new Node(20);

    temp->next = head;
    head = temp;

    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    return 0;
}