#include<iostream>
using namespace std; 
class Node{
    public:
    int data;
    Node *next;
};
int main(){
    Node *head = new Node();
    head->data = 20;
    head->next = NULL;

    // insert newnode at begining 
    Node *newNode = new Node();
    newNode->data = 10;

    // linking the data 
    newNode->next = head;
    head = newNode;

    // traverse and display 
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}


//  method 2 for the insertion with array to Linked list 

// DSA LINKED LIST INSERTING AT BEGINING
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int value) {
//         data = value;
//         next = NULL;
//     }
// };
// int main(){
//     int arr[5] = {10,12,15,20,11};
//     Node *Head = NULL;
//     for(int i = 0;i<5;i++){
//         // create first node
//         if(!Head){
//             Head = new Node(arr[i]);
//         }  
//         else{   
        
//             Node *temp = new Node(arr[i]);
//             temp->next = Head;
//             Head = temp;
//         }
//     }
//     Node *temp = Head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

