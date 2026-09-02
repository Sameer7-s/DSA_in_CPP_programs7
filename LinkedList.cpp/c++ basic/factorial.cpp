// // #include<iostream>
// // using namespace std;
// // void factorial()
// // {
// //     int total = 1;
// //     for (int i=1; i<=8;i++)
// //     total = total*i;

// //     cout<<total;
// //     return ;
// // }
  
// // int main()
// // {
// //     factorial();
// //     return 0;

// // }

///if we want to print by using return value

// #include<iostream>
// using namespace std;
// int factorial(int num)
// {
//     int total = 1;
//     for (int i=1; i<=num;i++)
//     total = total*i;
//     return total;
// }
// int main()
// {
//      int num;
//      cin>>num;
//      int value = factorial(num);
//      cout<<value; 
//      return 0;
// }



// #include<iostream>
// #include<cmath>
// using namespace std;
// // Table print
// // Odd or even 
// // factorial 
// // prime or not 
// // 1 to number 


// void Table(int num)
// {
//     for(int i=1;i<=10;i++)
//     cout<<num*i<<" ";

//     return;
// }


// void isOddEven(int num)
// {
//     if(num%2==0)
//     cout<<"Even"<<" ";
//     else
//     cout<<"Odd"<<" ";
//     return ;
// }


// void factorial(int num)
// {
//     int total = 1;
//     for(int i = 1; i<=num;i++)
//     total = total*i;
//     cout<<total<<" ";
//     return;
// }

// bool isPrime(int num) 
// {
//     if (num <= 1) return false;
//     for (int i = 2; i <= sqrt(num); i++) 
//     {
//         if (num % i == 0) return false;
//     }
//     return true;
// }

// int main()
// {
//     int num;
//     cin>>num;
//     Table(num);
//     isOddEven(num);
//     factorial(num);
//     isPrime(num); 
//     return 0; 
// }


// practice 
#include<iostream>
using namespace std;
 // tabel , printing even odd factorial , is_prime 

    void print_table(int num){

        for(int i = 1 ; i <= 10 ;i++)
            cout<< num * i<<" " ;
        
    }
    void is_EvenOrodd(int num)
{
        if(num %  2 == 0)
            cout<<"Number is even "<<" ";
        else
            cout<<"Number is odd "<<" ";
        
}

    int factorial (int num )
{
        int total = 1;
        for(int i = 1 ; i <= num ; i++)
            total = total * i ;
            cout<<total<<" ";
            return total;
}
int main (){
   
        int num;
        cin>>num;
        print_table(num);
        is_EvenOrodd(num);
        factorial(num);
        

        return 0;
}