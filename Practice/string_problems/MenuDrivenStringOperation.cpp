#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class SLL {
    Node *head = NULL;

public:

    void insert() {
        int x;
        cout << "Enter value: ";
        cin >> x;

        Node *newNode = new Node(x);
        newNode->next = head;
        head = newNode;
    }

    void deleteNode() {
        int x;
        cout << "Enter value to delete: ";
        cin >> x;

        Node *p = head, *q = NULL;

        while (p != NULL && p->data != x) {
            q = p;
            p = p->next;
        }

        if (p == NULL)
            cout << "Not found\n";
        else {
            if (q == NULL)
                head = head->next;
            else
                q->next = p->next;  

            delete p;
            cout << "Deleted\n";
        }
    }

    void search() {
        int x;
        cout << "Enter value to search: ";
        cin >> x;

        Node *p = head;

        while (p != NULL) {
            if (p->data == x) {
                cout << "Found\n";
                return;
            }
            p = p->next;
        }

        cout << "Not found\n";
    }

    void display() {
        Node *p = head;

        while (p != NULL) {
            cout << p->data << " -> ";
            p = p->next;
        }

        cout << "NULL\n";
    }
};

int main() {
    SLL s;
    int ch;

    do {
        cout << "\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Search";
        cout << "\n4. Display";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch (ch) {
            case 1: s.insert(); break;
            case 2: s.deleteNode(); break;
            case 3: s.search(); break;
            case 4: s.display(); break;
            case 5: cout << "Exit"; break;
            default: cout << "Invalid choice";
        }
    } while (ch != 5);

    return 0;
}