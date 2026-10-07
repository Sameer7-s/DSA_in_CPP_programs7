#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int b = 2;

    cout<<"before swap : "<< a << " " << b<< endl;
    int temp = a;
    a = b ;
    b = temp;
    cout<<" After swap : "<< a << " " << b << endl;

    return 0;
}