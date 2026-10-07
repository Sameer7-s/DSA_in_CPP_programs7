// #include<iostream>
// using namespace std;
// int main()
// {
//     string str = "Hello";
    
//     cout<<"Original string : "<<str<<endl;

//     cout<<"Reversed string : ";
//     for(int i =str.length() - 1;i>=0;i--){
//         cout<<str[i];
//     }

//     return 0;
// }
#include<iostream>
using namespace std;

int main()
{
    int a[10]={10,20,30,40,50};
    int n=5,pos=2;

    for(int i=pos;i<n-1;i++)
        a[i]=a[i+1];

    n--;

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}