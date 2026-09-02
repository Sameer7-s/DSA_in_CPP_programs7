// #include<iostream>
// using namespace std;
// class Car{
//     int mileage;
//      int type;
// };
// int main(){
//     Car Obj;
//     cout<<sizeof(Obj); // size -- 8
//     return 0;
// }

#include<iostream>
using namespace std;
class Car{
    char mileage;
    char c;
};
int main(){
    Car Obj; 
    cout<<sizeof(Obj); // size -- 8 why ??? char 1 byte int 4 byte
    return 0;
}