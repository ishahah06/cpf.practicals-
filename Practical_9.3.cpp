#include <iostream>
using namespace std;

void showStackAndHeap() {
    int localValue = 100;                 // automatic local variable (typically stack)
    int* heapValue = new int(250);        // dynamically allocated (heap)

    cout << "--------------- Stack Memory ----------------\n";
    cout << "Local Variable Value\n" << localValue << "\n";
    cout << "Memory Address\n" << static_cast<void*>(&localValue) << "\n";
    cout << "---------------------------------------------\n";
    cout << "--------------- Dynamically Allocated Memory ------------\n";
    cout << "Allocated Value\n" << *heapValue << "\n";
    cout << "Memory Address\n" << static_cast<void*>(heapValue) << "\n";
    cout << "---------------------------------------------\n";
    delete heapValue;
    heapValue = nullptr;
}

int main() {
    cout << "********************************************\n";
    cout << "MEMORY ORGANIZATION ANALYZER\n";
    cout << "********************************************\n";
    showStackAndHeap();

    int value = 50;
    int* single = &value;
    int** doubleLevel = &single;
    int*** tripleLevel = &doubleLevel;

    cout << "----------- Multi-level Referencing ----------\n";
    cout << "Original Value\n" << value << "\n";
    cout << "Single-level Address\n" << static_cast<void*>(single) << "\n";
    cout << "Double-level Address\n" << static_cast<void*>(doubleLevel) << "\n";
    cout << "Triple-level Address\n" << static_cast<void*>(tripleLevel) << "\n";
    cout << "Value Accessed through Three Levels\n" << ***tripleLevel << "\n";
    cout << "---------------------------------------------\n";

    cout << "--------------- Memory Safety ----------------\n";
    int* nullPointer = nullptr;
    cout << "Null Reference\n";
    if (nullPointer == nullptr) cout << "Safe (Reference is NULL)\n";
    cout << "---------------------------------------------\n";

    int* invalidPointer = new int(99);
    delete invalidPointer;
    invalidPointer = nullptr;
    cout << "Invalid Reference\n";
    cout << "Memory Released Successfully\n";
    cout << "Reference Invalid\n";
    cout << "---------------------------------------------\n";

    int* uninitializedPointer; // deliberately not read or dereferenced
    (void)uninitializedPointer;
    cout << "Uninitialized Address Variable\n";
    cout << "Unsafe to Access\n";
    cout << "---------------------------------------------\n";
    return 0;
}
