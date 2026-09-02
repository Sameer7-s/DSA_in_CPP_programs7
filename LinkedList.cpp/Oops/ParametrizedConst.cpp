#include <iostream>
using namespace std;

class Car{
    int cost;
    int mileage;

    public:
    Car(int in , int mil)
    {
        cost = in;
        mileage = mil;
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