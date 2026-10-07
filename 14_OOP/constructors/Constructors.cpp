#include <iostream>
using namespace std;

class Car{
    int cost;
    int mileage;

    public:
    Car()
    {
        cost = 120000;
        mileage = 10;

        cout << "Cost : " << cost << endl;
        cout << "Mileage : " << mileage << endl;

        cout << "Hello Constructor" << endl;
    }
};

int main()
{
    Car Obj;

    return 0;
}