#include <iostream>
#include <iomanip>
using namespace std;

struct Product {
    int productId;
    char category;
    double price;
    int quantity;
};

struct OrderA {
    char code;
    double amount;
    int quantity;
};

struct OrderB {
    double amount;
    int quantity;
    char code;
};

union SharedData {
    int integerValue;
    float floatingValue;
    char characterValue;
};

int main() {
    cout << "********************************************\n";
    cout << "COMPOSITE DATA REPRESENTATION ANALYZER\n";
    cout << "********************************************\n";

    cout << "Composite Data Type A\n";
    cout << "Size : " << sizeof(OrderA) << " Bytes\n";
    cout << "--------------------------------------------\n";
    cout << "Composite Data Type B\n";
    cout << "Size : " << sizeof(OrderB) << " Bytes\n";
    cout << "--------------------------------------------\n";
    cout << "Padding and Alignment Observed\n";
    cout << "--------------------------------------------\n";

    SharedData data{};
    cout << "Shared Memory Representation\n";
    data.integerValue = 120;
    cout << "Integer Value : " << data.integerValue << "\n";
    data.floatingValue = 120.00f;
    cout << fixed << setprecision(2);
    cout << "Floating Value : " << data.floatingValue << "\n";
    data.characterValue = 'x';
    cout << "Character Value : " << data.characterValue << "\n";
    cout << "After Updating Floating Value\n";
    data.floatingValue = 45.5f;
    cout << "Integer Value Changed\n";
    cout << "Character Value Changed\n";
    cout << "--------------------------------------------\n";

    cout << "Trade-off Analysis\n";
    cout << "Structure\n";
    cout << "Separate Memory for Every Member\n";
    cout << "Suitable for Storing Complete Records\n";
    cout << "--------------------------------------------\n";
    cout << "Union\n";
    cout << "Shared Memory for All Members\n";
    cout << "Suitable for Memory-efficient Applications\n";
    cout << "--------------------------------------------\n";
    cout << "Program Executed Successfully\n";
    cout << "--------------------------------------------\n";
    return 0;
}
