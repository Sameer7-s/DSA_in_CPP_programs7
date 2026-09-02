
//  #include<iostream>
// using namespace std;
// int main(){


//     int a = 2,b = 3;
//     int  sum;
//     sum = a + b;


//  cout<<"sum of the number: "<<sum<<endl;
//     return 0;
// }

// // /////PYRAMID PROBLEM 

// #include <iostream>
// using namespace std;
// int main(){

//     int  Total_rows;
//     cin>>Total_rows;

//     for (int row=2;row<=Total_rows;row++)
//     {
//         //space 
//         for(int col=1;col<=Total_rows-row;col++)
//         cout<<" ";

//         //print *
//         for( int col = 1;col<=2*row-1;col++)
//         cout<<"* ";

//         cout<<endl;
//     }

//     return 0;
// }





//pyramid problem 


// #include<iostream>
// using namespace std;
// int main()
// {


//     int total_rows;
//     cin>>total_rows;

// for (int i = 0; i>= total_rows ; i++)
// {

//      for(int row = 1; row>=total_rows; row++)
//      cout<<"*"<<endl;

//      for(int col = 1; row>=total_rows;)
//      cout<<" ";

// }
    
//     return 0;

// }

// #include<iostream>

// using namespace std;
// int total_rows ;





// #include<iostream>
// using namespace std;

//// PYRAMID PROBLEM WITH GAP BETWEEN NUMBER 

// #include <iostream>
// using namespace std;
// int main()
// {

//   int total_rows;
//   cin>>total_rows;

//   for(int row =1 ; row<=total_rows ; row++)
//   {
//     //space   
//     for (int col =1; col<=total_rows-row ; col++)
//     cout<<" ";

//     //print X with space 

//     for(int col = 1 ; col<=row;col++)
//     cout<<"* ";
    
//     cout<<endl;
//   }

//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main()
// {
//  int total_rows;
//  cin>>total_rows;

//  for (int row = 1; total_rows<= row ; row++)
//      // space 
//      for(int col = 1 ; total_rows>= col ; col++)
//      cout<<" "<<endl;

//      // star 

//      for ( int col =1 ; col>= total_rows; col++)

     


// }

///// BUTERFLY PROBLEM 

// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;

// for (int row=1; row<=n; row++)
//     {
//         for( int col = 1; col<=row;col++)
//         cout<<"*";

//         for( int col = 1; col<=2*n-2*row;col++)
//         cout<<" ";

//         for( int col = 1; col<=row;col++)
//         cout<<"*";
//         cout<<endl;
//     }
//     for (int row=1; row<=n-1; row++)
//     {
//         for( int col = 1; col<=n-row;col++)
//         cout<<"*";

//         for( int col = 1; col<=2*row;col++)
//         cout<<" ";

//         for( int col = 1; col<=n-row;col++)
//         cout<<"*";

//         cout<<endl;
//     }

//         return 0;

// }


/// EXOR OPERATOR ( ^ )
/// input a     input b     output 
///  0             0           0
///  0             1           1
///  1             0           1
///  1             1           0

/// question to print how many digits in your number [ 2 3 4 5 6 ]

// #include <iostream>
// using namespace std;
// int main()
// { 
//     int n;
//     cin>>n;

//     int num = 10;
//     int digit = 1;

//     for(int i=1;i>0;i++)
//     {
//         if(n/num==0)
//         {
//              cout<<digit; 
//              return 0;
//         }
//         num = num*10;
//         digit++;
            

//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main()
// {

//   int n;
//   cin>>n;
//   int  Digit = 0;

// while (n )
// {

//      Digit++;
//      n = n/10;
// }
// cout<<Digit;


//    return 0;
// }



///// rotatedtriange  pattern 


// #include<iostream>
// using  namespace std;
// int main()
// {


// int total_rows;
// cin>>total_rows;

// for(int row = 1; total_rows>= row;row++ );
//      {
//         for(int row = 1; total_rows<=row, row++)
//         cout<<"*"<<endl;
    
//     }
//     { 
//      for(int col = 1;col>=2*n-1;col++)
//      cout<<" "<<endl;
//     }


//     /// for X in range in 
     
   

// return 0;
// }

// // C++ program to print rotated triangle pattern using
// // Nested for loop

// #include <iostream>
// using namespace std;

// // Function to print rotated triangle pattern of 2*n-1 rows
// // and n columns
// void printRotatedTriangle(int n)
// {
//     // First we print upper n rows out of the total 2*n-1
//     // rows
//     for (int i = 1; i <= n; i++) {

//         for (int j = 1; j <= i; j++) {
//               //Printing stars separated by one space
//             cout << "*" << " ";
//         }
//         // line ends after printing i stars in (i)th row
//         cout << endl;
//     }
    
//     for (int i = 1; i <= n - 1; i++) {

      
//         // space 
//         for (int j = 1; j <= n - i; j++) {
             
//             cout << "*" << " ";
//         }
     
//         cout << endl;
//     }
// }

// int main()
// {

//     int n = 5;
//     printRotatedTriangle(n);
//     return 0;
// }