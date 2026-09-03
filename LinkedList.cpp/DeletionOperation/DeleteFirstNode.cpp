#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {

    int arr[3] = {10, 20, 30};

    Node* Head = NULL;

    // Create Linked List
    for (int i = 0; i < 3; i++) {

        Node* temp = new Node(arr[i]);

        temp->next = Head;

        Head = temp;
    }

    // Delete first node
    Node* temp = Head;

    Head = Head->next;

    delete temp;

    // Print Linked List
    temp = Head;

    while (temp != NULL) {

        cout << temp->data << " ";

        temp = temp->next;
    }

    return 0;
}