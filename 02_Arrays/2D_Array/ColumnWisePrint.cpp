// column wise print 

/*
arr[3][4]
1 2 3
4 5 6 
7 8 9

out put should be 
1  4  7
2  5  8
3  6  9

1] first go into the columns 
2] howmany rows are there print them

for(int j = 0 ; j < col ;j++)
{
    for(int i = 0;i<row;i++)
    cout<<arr[i][j]<<" ";
}
*/

#include<iostream>
using namespace std;
int main(){

    int arr[3][4];
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int j = 0 ; j< 4;j++)
    {
        for(int i = 0;i<3;i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

