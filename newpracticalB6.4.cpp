#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;

    int A[MAX], B[MAX], C[2 * MAX];
    int n, m;

    cout << "********************************************\n";
    cout << "          MERGE SORTED ARRAYS\n";
    cout << "********************************************\n";

    // Input first sorted array
    cout << "Enter size of first array: ";
    cin >> n;

    if (n <= 0 || n > MAX) {
        cout << "Invalid size of first array!\n";
        return 0;
    }

    cout << "Enter first array in sorted order:\n";

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Input second sorted array
    cout << "Enter size of second array: ";
    cin >> m;

    if (m <= 0 || m > MAX) {
        cout << "Invalid size of second array!\n";
        return 0;
    }

    cout << "Enter second array in sorted order:\n";

    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    // Merge both arrays
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (A[i] <= B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Copy remaining elements from first array
    while (i < n) {
        C[k++] = A[i++];
    }

    // Copy remaining elements from second array
    while (j < m) {
        C[k++] = B[j++];
    }

    // Display first array
    cout << "\nFirst Array\n";

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    // Display second array
    cout << "\n\nSecond Array\n";

    for (int i = 0; i < m; i++) {
        cout << B[i] << " ";
    }

    // Display merged array
    cout << "\n\nMerged Sorted Array\n";

    for (int i = 0; i < k; i++) {
        cout << C[i] << " ";
    }

    cout << '\n';

    return 0;
}
