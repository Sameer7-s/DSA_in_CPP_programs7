////DECIMAL TO BINARY CONVERSION OF ANY NUMBER 

// #include<iostream>
// using namespace std;
// int main()
// {
//  int num;
//  cin>>num;
//  int sum = 0;

//  while (num)
//  {
//    int digit = num%2;
//    num = num/2;
//    sum = sum*10+digit;
// }
//   cout<<sum<<" ";

//     return 0;
// }//// this code give error 


//// solving by while loops 
#include<iostream>
using namespace std;
int main()
{
 int num;
 cin>>num;
 int sum = 0;// int = 4 byte leta hai  or agr hum  bada number le [123444] to iska binary space 32 =bit se jaada hoga tbb answer wrong ayega so we have to increase the space of the integer data type like we can use[long long = ...]
 int mul = 1;


 while(num>0)
 {
    int digit = num%2;
    sum = sum+digit*mul;
    num = num/2;;
    mul = mul*10;
 };
 cout<<sum; /// this code works for smaller  decimal value  only valid till 999 
 return 0;
} 
 