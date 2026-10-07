#include<iostream>
using namespace std;

void IsEvenOdd(int num)
{
    if(num%2==0)
    cout<<"Even"<<endl;
    else
    cout<<"Odd"<<endl;
    return;
}

int main()

{
int num1 , num2, num3;
cin>>num1>>num2>>num3;
IsEvenOdd(num1);
IsEvenOdd(num2);
IsEvenOdd(num3); 

return 0;

}


///////// 2nd METHOD OF THIS 

#include<iostream>
using namespace std;

int IsEvenOdd(int num)
{
    if (num%2==0)
    return 0;
    else 
    return 1;
}
int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    int value = IsEvenOdd(num1);
    if (value==0)
    cout<<"Even";
    else 
    cout<<"Odd";  /// this will give result for only 1  starting value in output . 
     return 0;

}


// // 3rd method

#include<iostream>
using namespace std;

int IsEvenOdd(int num)
{
    if (num%2==0)
    cout<<"Even";
    else 
    cout<<"Odd"; /// yhi print krana chahte ho even odd to return ka use nhi hoga otherwise hoga 
}
int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    IsEvenOdd(num1);
   
     return 0;

}

/// ADDITION OF TWO INTEGER

// with out passing the number in the parameter 
#include<iostream>
using namespace std;
void add()
{
cout<<8+5;
return;
}
int main()
{ 
    add();
    return 0;

}

method 2 
 #include<iostream>
 using namespace std;
 void add(int num1, int num2,int num3)
 {
    cout<<num1+num2+num3;
    return ;
 }
 
 int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    add(num1,num2,num3);
    return 0;
}


//WITH USING PARAMETERS IN THE INSIDE THE FUCTION 



 #include<iostream>
 using namespace std;
 int add(int num1, int num2,int num3)
 {
    int value = num1+num2+num3;
    return value;
 } 
int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    int value = add(num1,num2,num3);

    cout<<value;
    return 0;
}





//// PRINT THE TABLE USING THE FUCTION 


#include<iostream>
using namespace std;

void Table()
{
    for( int i=1;i<=10;i++)
    cout<<10*i<<endl;

    return ;
}
int main()
{
   Table();
   return 0;

}
// by user input [parameter]

#include<iostream>
using namespace std;

void Table(int num)
{
    for(int i = 1; i <= 10; i++)
    cout<<num*i<<endl;

    return;
}


int main()
{
    int num;
    cin>>num;
    Table(num);
    return 0;
}

/// tabel












