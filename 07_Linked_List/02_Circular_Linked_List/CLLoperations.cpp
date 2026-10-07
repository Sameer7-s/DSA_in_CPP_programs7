// Operations in CLL
// Insertion, Deletion and Traversal

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class circularLinkedList {
    Node *last;

public:
    circularLinkedList() {
        last = NULL;
    }

    // Insertion
    void insert(int value) {
        Node *newNode = new Node(value);

        if (last == NULL) {
            last = newNode;
            last->next = last;
        }
        else {
            newNode->next = last->next;
            last->next = newNode;
            last = newNode;
        }
    }

    // Deletion
    void deleteNode() {
        if (last == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node *temp = last->next;

        if (temp == last) {
            delete last;
            last = NULL;
        }
        else {
            last->next = temp->next;
            delete temp;
        }

        cout << "Node deleted\n";
    }

    // Traversal
    void traverse() {
        if (last == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node *temp = last->next;

        cout << "Circular Linked List: ";

        while (temp != last) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << temp->data << endl;
    }
};
int main() {
    circularLinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.traverse();

    list.deleteNode();

    list.traverse();

    return 0;
}