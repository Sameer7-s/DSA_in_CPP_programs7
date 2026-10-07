// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data = value;
//         next = NULL;    
//     }
// };
// int main(){
//     Node *head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);

//     int value = 30;
//     int pos = 3;

//     Node *newNode = new Node(value);
//     Node *temp = head;

//     if(pos == 1){
//         newNode->next = head;
//         head = newNode;
//     }
//     else
//     {
//         // pos = pos - 2;

//         while(pos--){
//             temp = temp->next;
//         }
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }
//     temp = head;

//     while (temp != NULL)
//     {
//         /* code */
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
    


//     return 0;
// }

#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    int arr[100] = {10, 20, 40, 50, 60};

    Node *head = NULL;
    Node *tail = NULL;

    // Convert array into linked list
    for(int i = 0; i < 5; i++)
    {
        Node *temp = new Node(arr[i]);

        if(head == NULL){
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    int pos = 3;
    int value = 30;

    Node *temp = head;

    // Move to node before required position
    pos = pos - 2;

    while(pos--)
    {
        temp = temp->next;
    }

    // Insert new node
    Node *newNode = new Node(value);

    newNode->next = temp->next;
    temp->next = newNode;

    // Display
    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}