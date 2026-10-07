#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Stack {
    Node *top;

public:

    Stack() {
        top = NULL;
    }

    // Push element
    void push(int data) {
        Node *temp = new Node(data);

        if(!temp) {
            cout << "Stack is Overflow\n";
            return;
        }

        temp->next = top;
        top = temp;
    }

    // Pop element
    void pop() {
        if(!top) {
            cout << "Stack is Underflow\n";
            return;
        }

        Node *temp = top;
        top = top->next;
        delete temp;
    }

    // Top element
    int peek() {
        if(!top) {
            cout << "Stack is empty\n";
            return -1;
        }

        return top->data;
    }

    // Check empty
    bool empty() {
        return top == NULL;
    }
};

int main() {

    Stack S;

    S.push(10);
    S.push(30);

    cout << "Is stack empty: " << S.empty() << endl;

    cout << "Top element: " << S.peek() << endl;

    S.pop();

    cout << "Top element after pop: " << S.peek() << endl;

    S.pop();

    cout << "Is stack empty: " << S.empty() << endl;

    S.pop();

    return 0;
}