#include <iostream>
#include <string>
using namespace std;

// Global variable
int globalValue = 100;

// Part A: Function without parameters and without return value
void displayMessage()
{
    cout << "\n1. Function without parameters and without return value\n";
    cout << "Welcome to Function Design Analyzer!\n";
}

// Part A: Function without parameters but with return value
int getNumber()
{
    return 25;
}

// Part A: Function with parameters and without return value
void displaySquare(int number)
{
    cout << "Square of " << number << " = "
         << number * number << endl;
}

// Part A: Function with parameters and with return value
int addNumbers(int a, int b)
{
    return a + b;
}

// Part B: Call by value
void callByValue(int number)
{
    number = number + 10;
    cout << "Value inside callByValue() = " << number << endl;
}

// Part B: Call by reference
void callByReference(int &number)
{
    number = number + 10;
    cout << "Value inside callByReference() = " << number << endl;
}

// Part C: Demonstrate variable scope
void demonstrateScope()
{
    int localValue = 50;

    cout << "\nInside demonstrateScope():\n";
    cout << "Local variable = " << localValue << endl;
    cout << "Global variable = " << globalValue << endl;
}

// Part D: Function overloading
void displayStudent(string name)
{
    cout << "\nStudent Name: " << name << endl;
}

void displayStudent(string name, string branch, int semester)
{
    cout << "Student Name: " << name << endl;
    cout << "Branch: " << branch << endl;
    cout << "Semester: " << semester << endl;
}

void displayStudent(string name, string branch, int semester,
                    float percentage, string contact)
{
    cout << "Student Name: " << name << endl;
    cout << "Branch: " << branch << endl;
    cout << "Semester: " << semester << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Contact: " << contact << endl;
}

int main()
{
    cout << "============================================\n";
    cout << " FUNCTION DESIGN AND PARAMETER PASSING ANALYZER\n";
    cout << "============================================\n";

    // Part A: Function design
    displayMessage();

    int value = getNumber();
    cout << "\n2. Function without parameters but with return value\n";
    cout << "Returned value = " << value << endl;

    cout << "\n3. Function with parameters and without return value\n";
    displaySquare(5);

    cout << "\n4. Function with parameters and with return value\n";
    cout << "Sum = " << addNumbers(10, 20) << endl;

    // Part B: Parameter passing
    int number = 10;

    cout << "\n========== CALL BY VALUE ==========\n";
    cout << "Before function call = " << number << endl;
    callByValue(number);
    cout << "After function call = " << number << endl;

    cout << "\n========== CALL BY REFERENCE ==========\n";
    cout << "Before function call = " << number << endl;
    callByReference(number);
    cout << "After function call = " << number << endl;

    // Part C: Scope and visibility
    cout << "\n========== VARIABLE SCOPE ==========\n";
    cout << "Global variable inside main() = "
         << globalValue << endl;

    demonstrateScope();

    // A local variable declared in demonstrateScope()
    // cannot be accessed directly from main().

    // Part D: Function overloading
    cout << "\n========== FUNCTION OVERLOADING ==========\n";

    displayStudent("Amit Patel");

    cout << "\nStudent Details with Academic Information:\n";
    displayStudent("Amit Patel", "CE", 1);

    cout << "\nStudent Details with Academic and Contact Information:\n";
    displayStudent("Amit Patel", "CE", 1, 85.20f, "9876543210");

    cout << "\nProgram Executed Successfully.\n";

    return 0;
}
