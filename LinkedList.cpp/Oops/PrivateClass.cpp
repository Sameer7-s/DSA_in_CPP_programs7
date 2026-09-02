// #include<iostream>
// using namespace std;

// class Bank{

//     int balance;// by default its private 
//     string name;
//     public:
//     void SetValue()
//     {
//         balance = 200;
//         name = "Ram";
//     };
   

//     void check_balance(){
//         cout<<"balance is : "<<balance<<" ";
//         cout<<name<<" ";
//     };
//     void withdraw(){
//         balance -= 100;
//         cout<<"100 rs withdraw "<<endl;
//     };

// };

// int main()
// {
//     Bank obj;
//     obj.SetValue(); 
//     obj.check_balance();
//     obj.withdraw();
//     obj.check_balance();
     

//     return 0;
// }

#include<iostream>
using namespace std;

class Bank
{

    int balance;// by default its private 
    string name;
    public:
    void SetValue(int amount , string person)
    {
        balance = amount;
        name = person;
    };
   

    void check_balance(){
        cout<<"balance is : "<<balance<<" ";
        cout<<name<<" ";
    };
    void withdraw(){
        balance -= 100;
        cout<<"100 rs withdraw "<<endl;
    };

};

int main()
{
    Bank obj;
    obj.SetValue(1000,"Raj"); 
    obj.check_balance();
    obj.withdraw();
    obj.check_balance();
     

    return 0;
}

