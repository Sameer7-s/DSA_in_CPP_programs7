#include<iostream>
using namespace std;
class Car{

    public:
    int cost;
    int mileage;

};

int main()
{
    Car *p  = new Car();
    (*p).cost = 200000;
    p->mileage = 10;
    cout<<p->cost;
    return 0;

}