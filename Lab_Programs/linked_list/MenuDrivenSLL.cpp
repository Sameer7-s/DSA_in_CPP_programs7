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

Node* head = NULL;

// Insert at beginning
void insertBeginning() {
    int value;
    cout << "Enter value: ";
    cin >> value;

    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;

    cout << "Node inserted at beginning.\n";
}

// Insert at end
void insertEnd() {
    int value;
    cout << "Enter value: ";
    cin >> value;

    Node* newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
    } 
    else {
        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "Node inserted at end.\n";
}

// Insert at specific position
void insertPosition() {
    int value, pos;

    cout << "Enter value: ";
    cin >> value;

    cout << "Enter position: ";
    cin >> pos;

    if (pos < 1) {
        cout << "Invalid position.\n";
        return;
    }

    if (pos == 1) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << "Node inserted.\n";
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid position.\n";
        return;
    }

    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;

    cout << "Node inserted at position " << pos << ".\n";
}

// Delete from beginning
void deleteBeginning() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    head = head->next;

    delete temp;

    cout << "Node deleted from beginning.\n";
}

// Delete from end
void deleteEnd() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    if (head->next == NULL) {
        delete head;
        head = NULL;
        cout << "Node deleted from end.\n";
        return;
    }

    Node* temp = head;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;

    cout << "Node deleted from end.\n";
}

// Delete from specific position
void deletePosition() {
    int pos;

    cout << "Enter position: ";
    cin >> pos;

    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    if (pos < 1) {
        cout << "Invalid position.\n";
        return;
    }

    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;

        cout << "Node deleted.\n";
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position.\n";
        return;
    }

    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;

    delete deleteNode;

    cout << "Node deleted from position " << pos << ".\n";
}

// Traversal
void traversal() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;

    cout << "Singly Linked List: ";

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main() {
    int choice;

    do {
        cout << "\n========== SLL MENU ==========\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Delete from Beginning\n";
        cout << "5. Delete from End\n";
        cout << "6. Delete from Position\n";
        cout << "7. Traversal\n";
        cout << "8. Exit\n";
        cout << "==============================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            insertBeginning();
            break;

        case 2:
            insertEnd();
            break;

        case 3:
            insertPosition();
            break;

        case 4:
            deleteBeginning();
            break;

        case 5:
            deleteEnd();
            break;

        case 6:
            deletePosition();
            break;

        case 7:
            traversal();
            break;

        case 8:
            cout << "Program exited.\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 8);

    return 0;
}