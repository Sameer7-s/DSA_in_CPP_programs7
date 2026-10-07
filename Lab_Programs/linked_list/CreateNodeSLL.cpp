// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;
// };
// int main(){
//     Node * head = new Node();

      
//     // creating first node
//     head->data = 20;
//     head->next = NULL;

//     Node *first = new Node();
//     first->data = 30;
//     head->next = NULL;

//     // display node data
//     cout<<"Data of first node  : "<<head->data<<endl;
//     cout<<"Data of second node  : "<<first->data<<endl;

//     return 0;
// }



// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
// };
// int main(){
//     Node *head = new Node();
//     Node *second = new Node();

//     // assign data to nodes 
//     head->data = 10;
//     second->data = 45;

//     // link both node 

//     head->next = second;
//     second->next = NULL;

//     //display the NODE 
//     cout<<"First Node data :  "<<head->data<<endl;
//     cout<<"Second Node data  : "<<second->data<<endl;

//     return 0;
// }

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};
int main(){
    Node *head = new Node();
    Node *second = new Node();

    // assigining the data 
    head->data = 20;
    second->data = 30;
    //link 
    head->next = second;
    second->next = NULL;

    cout<<"first node : "<<head->data<<endl;
    cout<<"second node : "<<second->data<<endl;

    cout<<"Linked list : "<<head->data<<" "<<second->data<<endl;





}