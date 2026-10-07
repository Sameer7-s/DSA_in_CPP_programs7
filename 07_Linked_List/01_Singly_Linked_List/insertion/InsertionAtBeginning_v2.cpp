#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class List {
    Node* head;

public:
    List() {
        head = NULL;
    }

    void insertBeg(int x) {
        Node* temp = new Node(x);
        temp->next = head;
        head = temp;
    }

    void insertEnd(int x) {
        Node* temp = new Node(x);

        if (head == NULL) {
            head = temp;
            return;
        }

        Node* p = head;
        while (p->next != NULL)
            p = p->next;

        p->next = temp;
    }

    void deleteVal(int x) {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        if (temp->data == x) {
            head = temp->next;
            delete temp;
            return;
        }

        while (temp->next != NULL && temp->next->data != x)
            temp = temp->next;

        if (temp->next != NULL) {
            Node* p = temp->next;
            temp->next = p->next;
            delete p;
        }
        else
            cout << "Value not found\n";
    }

    void search(int x) {
        Node* temp = head;
        int pos = 1;

        while (temp != NULL) {
            if (temp->data == x) {
                cout << "Found at position " << pos << endl;
                return;
            }
            temp = temp->next;
            pos++;
        }

        cout << "Not found\n";
    }

    void display() {
        Node* temp = head;

        if (temp == NULL) {
            cout << "List is empty\n";
            return;
        }

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main() {
    List l;
    int choice, x;

    do {
        cout << "\n1. Insert Beginning";
        cout << "\n2. Insert End";
        cout << "\n3. Delete Value";
        cout << "\n4. Search";
        cout << "\n5. Display";
        cout << "\n6. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> x;
            l.insertBeg(x);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> x;
            l.insertEnd(x);
            break;

        case 3:
            cout << "Enter value: ";
            cin >> x;
            l.deleteVal(x);
            break;

        case 4:
            cout << "Enter value: ";
            cin >> x;
            l.search(x);
            break;

        case 5:
            l.display();
            break;

        case 6:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice";
        }

    } while (choice != 6);

    return 0;
}
