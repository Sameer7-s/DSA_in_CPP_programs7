#include<iostream>
using namespace std;
class Node
{  
    public:
    int data;
    Node* next;
    
    
    Node(int value){
        data = value;
        next = NULL;
    }
};
int main(){
    int arr[5] = {10,12,15,20,11};
    Node *Head  = NULL , *Tail = NULL; 

    // create first node 
    for(int i = 0;i<5;i++){
        if(!Head){// first node creation
            Head = new Node(arr[0]);
            Tail = Head;
        }

    else{
        // other node creation by adding the element in the last 
        Tail->next = new Node(arr[i]);
        Tail = Tail->next;
    }
    }
// initially ---10 
// insert 20 Tail->next == 20
// 10 -> 20 ->30

// traverse the linked list 
    Tail = Head;

    while(Tail!=NULL){
        cout<<Tail->data<<" ";
        Tail = Tail->next;
    }



    return 0;
}









