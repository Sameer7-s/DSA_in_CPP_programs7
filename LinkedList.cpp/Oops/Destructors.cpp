// #include<iostream>
// using namespace std;
// class Car{

//     public:
//     int cost;
//     int mileage;
//     Car()
//     {
//         cout<<"Constructor Executed \n";
//     }
//     ~Car()
//     {
//         cout<<"Destructor Executed \n";
//     }
    

// };
// int main()
// {
//     Car *p  = new Car();
//     delete p;
//     return 0;

// }


// pointer

#include<iostream>
using namespace std;

class Customer{
    public:
    int age , balance;
    string name;
};
int main(){
    Customer *C1 = new Customer();
    // (*C1).name = "Sam";
    // (*C1).age = 19;
    // (*C1).balance = 20000;
    //  cout<<(*C1).name<<" ";

    C1->name = "Sam";
    C1->age = 19;
    C1->balance = 20000;
    cout<<C1->name<<endl;
    cout<<C1->age<<endl;

   
    return 0;

}