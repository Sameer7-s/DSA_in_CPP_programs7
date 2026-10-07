#include<iostream>
using namespace std;
int main()
{
    int arr[] =  {10 , 20 , 30 , 40 , 50};
    int key = 40;

    int low = 0 , high = 4;

    while(low<=high){
        int mid = (low + high)/2;
        
        if(arr[mid] == key){
            cout<<"Element found at position : "<<mid+1<<endl;
            return 0;
        }
        else if(arr[mid]>key){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }




    return 0;
}