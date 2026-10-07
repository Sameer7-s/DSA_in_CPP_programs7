#include<iostream>
using namespace std;
int main()
{
    int queue[5] , front = 0 , rear = -1;
    // Enqueue
    queue[++rear] = 10;
    queue[++rear] = 20;
    queue[++rear] = 30;
    queue[++rear] = 40;

    for(int i = front;i<=rear;i++){
        cout<<queue[i]<<" ";
    }
    
    // dequeue
    cout<<"\n deleted element "<<queue[front++]<<endl;

    // queue after deletion 
    for(int i = front;i<=rear;i++){
        cout<<queue[i]<<" ";
    }






    return 0;
}