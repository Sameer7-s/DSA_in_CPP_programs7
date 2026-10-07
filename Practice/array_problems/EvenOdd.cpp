#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 15, 20, 25, 30};
    int even = 0, odd = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even elements: " << even << endl;
    cout << "Odd elements: " << odd << endl;

    return 0;
}