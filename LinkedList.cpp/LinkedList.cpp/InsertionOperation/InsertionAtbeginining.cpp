// // DSA LINKED LIST INSERTING AT BEGINING

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
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










// #include <iostream>
// using namespace std;

// // creating Node
// class Node {
// public:
//     int data;
//     Node *next;

//     Node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// int main() {
//     Node *Head = NULL;

//     int arr[] = {2, 4, 6, 8, 10};

//     for (int i = 0; i < 5; i++) {
//         // Insert the node at beginning

//         if (Head == NULL) {
//             Head = new Node(arr[i]);
//         } else {
//             Node *temp = new Node(arr[i]);
//             temp->next = Head;
//             Head = temp;
//         }
//     }

//     // print the values
//     Node *temp = Head;

//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// int main() {
//     Node* head = NULL;
//     int n, value;

//     cout << "How many nodes? ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cout << "Enter value: ";
//         cin >> value;

//         Node* temp = new Node{120,20,30};
//         temp->next = head;
//         head = temp;
//     }

//     cout << "Linked List: ";
//     while (head != NULL) {
//         cout << head->data << " ";
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
    Node(int value){
        data = value;
        next = NULL;
    }
};
int main(){


    return 0;
}