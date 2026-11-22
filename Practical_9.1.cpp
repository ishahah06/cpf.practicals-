#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "********************************************\n";
    cout << "MEMORY ADDRESS EXPLORER\n";
    cout << "********************************************\n";

    int number = 25;
    char letter = 'A';
    float decimal = 85.60f;

    cout << "------------ Variable Information ------------\n";
    cout << "Integer Value : " << number << "\n";
    cout << "Memory Address : " << static_cast<void*>(&number) << "\n";
    cout << "----------------------------------------------\n";
    cout << "Character Value : " << letter << "\n";
    cout << "Memory Address : " << static_cast<void*>(&letter) << "\n";
    cout << "----------------------------------------------\n";
    cout << fixed << setprecision(2);
    cout << "Floating Value : " << decimal << "\n";
    cout << "Memory Address : " << static_cast<void*>(&decimal) << "\n";
    cout << "----------------------------------------------\n";

    int* ptr = &number;
    cout << "Indirect Referencing\n";
    cout << "Stored Value : " << *ptr << "\n";
    *ptr = 30;
    cout << "Modified Value : " << *ptr << "\n";
    cout << "----------------------------------------------\n";

    int values[5] = {10, 20, 30, 40, 50};
    cout << "Sequential Data Collection\n";
    cout << "Array using Index\n";
    for (int i = 0; i < 5; ++i) cout << values[i] << (i == 4 ? '\n' : ' ');
    cout << "Array using Address-based Access\n";
    for (int i = 0; i < 5; ++i) cout << *(values + i) << (i == 4 ? '\n' : ' ');
    cout << "----------------------------------------------\n";
    cout << "Observation\n";
    cout << "Both approaches access the same memory locations.\n";
    cout << "----------------------------------------------\n";
    return 0;
}
