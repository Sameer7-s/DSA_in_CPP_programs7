// #include<iostream>
// using namespace std;
// class Node{

//     public:
//     int data;
//     Node *next;
// };
// void print(Node *head)
// {
//     while(head != NULL) 
//     {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
// }

// int main()
// {
//     int n;
//     cout<<"Enter the size : "<<" ";
//     cin>>n;

//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     // creating the first Node;
//     Node *head = new Node;
//     head->data = arr[0];
//     head->next = NULL;
//     Node *temp = head;
//     // creating further linked list

//     for(int i = 1;i<n;i++)
//     {
//         temp->next = new Node;
//         temp = temp->next;
//         temp->data = arr[i];    
//         temp->next = NULL;
//     }
//     print(head);


//     return 0;
// }

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

void print(Node *head){
    cout<<head->data<<" ";
    head = head->next;
}
int main()
{

    int n;
    cout<<"Enter the size : "<<" ";
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[n];
    }
    // creating the first node 
    Node *head = new Node;
    head->data = arr[0];
    head->next = NULL;
    Node *temp = head;

    for(int i = 1;i<n;i++){
        temp->next = new Node;
        temp = temp->next;
        temp->data = arr[i];
        temp->next = NULL;
    }
 
    print(head);
}























