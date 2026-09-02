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
    void insert(){
        Node *head = new Node();
        int arr[] = {2, 4, 6, 8, 10};

        for (int i = 0; i < 5; i++) {
            // Insert the node at beginning

            if (head == NULL) {
                head = new Node(arr[i]);
            } else {
                Node *temp = new Node(arr[i]);
                temp->next = head;
                head = temp;
            }

        }

    };
    void delete(){
        
    }

    int main(){

        insert();

        return 0;
    }


    #include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Insert node at beginning
void insert(Node*& head, int value) {
    Node* temp = new Node(value);
    temp->next = head;
    head = temp;
}

// Delete node from beginning
void deleteNode(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    head = head->next;

    delete temp;
}

// Display linked list
void display(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {

    Node* head = nullptr;

    int arr[] = {2, 4, 6, 8, 10};

    // Insert elements at beginning
    for (int i = 0; i < 5; i++) {
        insert(head, arr[i]);
    }

    cout << "Linked List: ";
    display(head);

    // Delete first node
    deleteNode(head);

    cout << "After deletion: ";
    display(head);

    return 0;
}