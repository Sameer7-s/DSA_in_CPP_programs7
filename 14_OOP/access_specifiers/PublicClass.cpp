#include<iostream>
using namespace std;

class Bank{
    public:
    int balance;
    string name;

    void check_balance(){
        cout<<"balance is : "<<balance<<" ";
    };
    void withdraw(){
        balance -= 100;
        cout<<"100 rs withdraw "<<endl;
    };

};

int main()
{
    Bank obj;
    obj.balance = 1000;
    obj.name = "Sam";
    obj.check_balance();
    obj.withdraw();
    obj.check_balance();

    return 0;
}

