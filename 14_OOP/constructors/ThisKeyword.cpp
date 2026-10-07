#include <iostream>
using namespace std;

class Car{
    int cost;
    int mileage;

    public:
    Car(int cost  , int mileage)
    {
       this->cost = cost;
        this->mileage = mileage;
        cout << "Hello Constructor" << endl;
    };
    void Print(){
        cout<<"Cost : "<<cost<<endl;
        cout<<"mileage :"<<mileage<<endl;
    }
};

int main()
{
    Car Obj(50000,10);
    Obj.Print();
    return 0;
}