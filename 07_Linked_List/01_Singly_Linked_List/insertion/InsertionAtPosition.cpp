// //  2 4 6  8
// // insert 3 at after 4 

// // 2 4 3 6 7 

// // temp node create kro jo always Head ko point krega
// // x = 2 diye hai to 1 bar temp move krega
// // x = 3 diye hai to 2 bar temp move krega 1  2 postion pr and temp point krega 2 me 
// // node create kro and insert element dalo us node ke andr  30 element add = 500
// // now pointer create kro jo inserted element ka address store kre temp2 = 500 

#include<iostream>
using namespace std;
class 















































// // #include<iostream>
// // using namespace std;

// // // Node class
// // class Node {
// // public:
// //     int data;
// //     Node* next;

// //     Node(int value) {
// //         data = value;
// //         next = NULL;
// //     }
// // };

// // // Create linked list using recursion
// // Node* CreatLinkedList(int arr[], int index, int size, Node* prev) {
// //     if(index == size) {
// //         return prev;
// //     }

// //     Node* temp = new Node(arr[index]);
// //     temp->next = prev;

// //     return CreatLinkedList(arr, index + 1, size, temp);
// // }

// // int main() {
// //     Node* Head = NULL;

// //     int arr[] = {2, 4, 6, 8, 10};

// //     // 4th argument NULL added
// //     Head = CreatLinkedList(arr, 0, 5, NULL);

// //     int pos = 2;
// //     int value = 23;

// //     Node* temp = Head;

// //     pos--;

// //     while(pos--) {
// //         temp = temp->next;
// //     }

// //     Node* temp2 = new Node(value);

// //     temp2->next = temp->next;
// //     temp->next = temp2;

// //     temp = Head;

// //     while(temp != NULL) {
// //         cout << temp->data << endl;
// //         temp = temp->next;
// //     }

// //     return 0;
// // }



// // without recursion 

// #include<iostream>
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
//     int arr[] = {2, 4, 6, 8, 10};
//     Node *Head = NULL, *Tail = NULL;
//     // Create linked list
//     for(int i = 0; i < 5; i++) {
//         Node* temp = new Node(arr[i]);

//         if(Head == NULL)
//             Head = Tail = temp;
//         else {
//             Tail->next = temp;
//             Tail = temp;
//         }
//     }
//     int pos = 2 ,  value = 23; 
//     Node* temp = Head;
//     while(pos--) {
//         temp = temp->next;
//     }
//     Node* newNode = new Node(value);
//     newNode->next = temp->next;
//     temp->next = newNode;
//     // Display
//     temp = Head;
//     while(temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }


// Insert a node in a particular position or node 


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

//     temp = Head;
//     while(temp->data != 12){
//         temp = temp->next;
//     }
//     // insert after 12 
//     Node *newNode = new Node(100);
//     newNode->next = temp->next;
//     temp->next = newNode;
//     cout<<endl;

//     temp = Head;
//      while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     // Insert element before a element `12 se phle insert kr do 300
//     if(Head->data==12){
//         Node *temp = new Node(300);
//         temp->next = Head;
//         Head = temp;
//     }
//     Node *prev = NULL , *curr = Head;
//     while(curr->data!= 12){
//         prev = curr;
//         curr = curr->next;
//     }
//     temp = new Node(300);
//     temp->next = curr;
//     prev->next = temp;

//     cout<<endl;
//     // print it
//     temp = Head;

//       while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }
 