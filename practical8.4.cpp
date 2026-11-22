#include <iostream>
using namespace std;

// Part A: Display numbers from 1 to N using recursion
void displayAscending(int n)
{
    if (n == 0)
        return;

    displayAscending(n - 1);
    cout << n << " ";
}

// Part A: Display numbers from N to 1 using recursion
void displayDescending(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    displayDescending(n - 1);
}

// Part B: Calculate sum of digits using recursion
int sumOfDigits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sumOfDigits(n / 10);
}

// Part B: Reverse a number using recursion
long long reverseNumber(long long n, long long reversed = 0)
{
    if (n == 0)
        return reversed;

    return reverseNumber(n / 10, reversed * 10 + n % 10);
}

// Part C: Convert decimal to binary using recursion
void decimalToBinary(int n)
{
    if (n > 1)
        decimalToBinary(n / 2);

    cout << n % 2;
}

int main()
{
    int n;

    cout << "============================================\n";
    cout << "          RECURSIVE UTILITY ANALYZER\n";
    cout << "============================================\n";

    // Part A: Recursive traversal
    cout << "\nEnter a positive integer N: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input. Please enter a positive integer.\n";
        return 1;
    }

    cout << "\nNumbers from 1 to " << n << ": ";
    displayAscending(n);

    cout << "\nNumbers from " << n << " to 1: ";
    displayDescending(n);

    cout << endl;

    // Part B: Recursive number processing
    long long number;

    cout << "\nEnter a non-negative integer to reverse: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Invalid input. Please enter a non-negative integer.\n";
        return 1;
    }

    cout << "Reversed number = " << reverseNumber(number) << endl;

    if (number <= 2147483647LL)
    {
        cout << "Sum of digits = " << sumOfDigits((int)number) << endl;
    }
    else
    {
        cout << "Number is too large for the digit-sum function.\n";
    }

    // Part C: Decimal to binary conversion
    int decimal;

    cout << "\nEnter a non-negative decimal integer for binary conversion: ";
    cin >> decimal;

    if (decimal < 0)
    {
        cout << "Invalid input. Please enter a non-negative integer.\n";
        return 1;
    }

    cout << "Binary representation of " << decimal << " = ";

    if (decimal == 0)
        cout << "0";
    else
        decimalToBinary(decimal);

    cout << endl;

    // Part D: Comparative analysis
    cout << "\n========== COMPARATIVE ANALYSIS ==========\n";
    cout << "1. Readability: Recursion can make some tasks simpler to express.\n";
    cout << "2. Execution flow: Each recursive call waits for a smaller problem.\n";
    cout << "3. Function calls: Recursive operations create multiple calls.\n";
    cout << "4. Implementation: Recursion requires a base case to stop.\n";
    cout << "5. Memory: Recursive calls use the call stack.\n";
    cout << "6. Iteration may be more efficient for simple repetitive tasks.\n";

    cout << "\nProgram Executed Successfully.\n";

    return 0;
}
