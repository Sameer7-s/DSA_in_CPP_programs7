
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    // constructor creating
    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){

    int arr[5] = {10,4,45,5,3};
    Node *head = NULL;
    int count = 0;

    for(int i = 0;i<5;i++){
        if(!head){
            head = new Node(arr[i]);
        }else{
            Node *temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
        
    }
        Node *temp = head;
        
        cout<<"Linked list is : "<<" ";
        while(temp != NULL){
            count++;       
            cout<<temp->data<<" ";
            temp = temp->next;


        }
        cout<<"\nTotal Count of element  = "<<count<<" ";
       
    
    

    return 0;
}