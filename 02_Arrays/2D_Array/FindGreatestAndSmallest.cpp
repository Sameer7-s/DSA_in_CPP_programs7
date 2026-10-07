#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of element of an array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements\n";

    for(int i = 0; i<n;i++){
        cin>>arr[i];
}

    // assume first element as a variable of smallest and largest and compare with hole whole array

    int smallest = arr[0];
    int greatest = arr[0];



    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }

        if(arr[i] > greatest) {
            greatest = arr[i];
        }
    }

    cout << "Smallest element = " << smallest << endl;
    cout << "Greatest element = " << greatest << endl;

    return 0;
}