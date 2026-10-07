#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int marks[10][5];
    int total[10];
    float average[10];
    int rank[10];

    // Input marks
    for (int i = 0; i < 10; i++) {
        cout << "Enter marks for Student " << i + 1 << ":\n";
        total[i] = 0;

        for (int j = 0; j < 5; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> marks[i][j];
            total[i] += marks[i][j];
        }

        average[i] = total[i] / 5.0;
    }

    // Calculate rank
    for (int i = 0; i < 10; i++) {
        rank[i] = 1;

        for (int j = 0; j < 10; j++) {
            if (total[j] > total[i]) {
                rank[i]++;
            }
        }
    }

    // Display result
    cout << "\n-----------------------------------------------\n";
    cout << "Student\tTotal\tAverage\tRank\n";
    cout << "-----------------------------------------------\n";

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << "\t"
             << total[i] << "\t"
             << fixed << setprecision(2) << average[i] << "\t"
             << rank[i] << endl;
    }

    return 0;
}