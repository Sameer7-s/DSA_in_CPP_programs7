    // #include<iostream>
    // using namespace std;
    // class Node{
    //     public:
    //     int data;
    //     Node *next;
    //     Node(int value){
    //         data = value;
    //         next = NULL;
    //     }
    // };
    // int main()
    // {
    //     Node *top = NULL;

    //     // push 10
    //     Node *newNode = new Node(10);
    //     newNode->next = top;
    //     top = newNode;

    //     newNode = new Node(20);
    //     newNode->next = top;
    //     top = newNode;

    //     newNode = new Node(30);
    //     newNode->next = top;
    //     top = newNode;

    //     //display the stack 

    //     Node *temp = top;

    //     cout<<"Stack : ";

    //     while(temp != NULL){ 
    //         cout<<temp->data<<" ";
    //         temp = temp->next;
    //     }
    //     return 0;
    // }
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
    int main()
    {
        Node *top = NULL;

        Node *newnode = new Node(10);
        newnode->next = top;
        top = newnode;
        
        newnode = new Node(20);
        newnode->next = top;
        top = newnode;

        newnode = new Node(30);
        newnode->next = top;
        top = newnode;

        Node *temp = top;

        while(temp != NULL){
            cout<<temp->data<< " ";
            temp = temp->next;
        }
        return 0;
    }