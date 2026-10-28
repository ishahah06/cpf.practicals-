#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;

    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int C[SIZE][SIZE] = {0};

    cout << "********************************************\n";
    cout << "         MATRIX MULTIPLICATION\n";
    cout << "********************************************\n";

    // Input first matrix
    cout << "\nEnter elements of the first 3x3 matrix:\n";

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "\nEnter elements of the second 3x3 matrix:\n";

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix multiplication
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display first matrix
    cout << "\nFirst Matrix\n";

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << A[i][j] << '\t';
        }
        cout << '\n';
    }

    // Display second matrix
    cout << "\nSecond Matrix\n";

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << B[i][j] << '\t';
        }
        cout << '\n';
    }

    // Display resultant matrix
    cout << "\n------------------------------------------\n";
    cout << "Resultant Matrix\n";

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << C[i][j] << '\t';
        }
        cout << '\n';
    }

    return 0;
}
