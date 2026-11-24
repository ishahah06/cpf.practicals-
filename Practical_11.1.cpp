#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

int globalValue = 100;

int main() {
    cout << "********************************************\n";
    cout << "PROGRAM EXECUTION & ERROR HANDLING\n";
    cout << "ANALYZER\n";
    cout << "********************************************\n";

    int localValue = 200;
    int* dynamicValue = new int(300);
    cout << "Compile-time and Run-time Memory\n";
    cout << "Global Variable Value : " << globalValue << "\n";
    cout << "Local Variable Value : " << localValue << "\n";
    cout << "Dynamic Memory Value : " << *dynamicValue << "\n";
    cout << "--------------------------------------------\n";

    cout << "Low-level Error Demonstration\n";
    unsigned char small = 250;
    small = static_cast<unsigned char>(small + 10); // defined modulo conversion
    cout << "Arithmetic Overflow Observed\n";
    cout << "--------------------------------------------\n";

    int original = 50;
    int* first = &original;
    int* second = &original;
    cout << "Pointer Aliasing\n";
    cout << "Original Value : " << original << "\n";
    *first = 75;
    cout << "Updated Value : " << *second << "\n";
    cout << "Both Address Variables Refer to the Same Memory\n";
    cout << "Location\n";
    cout << "--------------------------------------------\n";

    cout << "Memory Leak Demonstration\n";
    int* temporary = new int(500);
    cout << "Dynamic Memory Allocated\n";
    delete temporary;
    temporary = nullptr;
    delete dynamicValue;
    dynamicValue = nullptr;
    cout << "Memory Released Successfully\n";
    cout << "--------------------------------------------\n";

    cout << "Arithmetic Operation\n";
    double dividend, divisor;
    cout << "Enter Dividend : ";
    if (!(cin >> dividend)) {
        cout << "Error : Invalid numerical input.\n";
        return 1;
    }
    cout << "Enter Divisor : ";
    if (!(cin >> divisor)) {
        cout << "Error : Invalid numerical input.\n";
        return 1;
    }
    if (divisor == 0) cout << "Error : Division by Zero is not Allowed.\n";
    else cout << "Result : " << dividend / divisor << "\n";
    cout << "--------------------------------------------\n";

    cout << "File Operation\n";
    ifstream input("missing_file_demo.txt");
    if (!input.is_open()) cout << "Unable to Open File.\n";
    else input.close();
    cout << "--------------------------------------------\n";
    cout << "Program Executed Successfully\n";
    cout << "--------------------------------------------\n";
    return 0;
}
