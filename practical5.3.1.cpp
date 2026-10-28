#include <iostream>
using namespace std;

int main()
{
    int choice, n = 5;

    do
    {
        cout << "\n========== PATTERN MENU ==========\n";
        cout << "1. Numeric Pattern\n";
        cout << "2. Lowercase Alphabet Pattern\n";
        cout << "3. Uppercase Alphabet Pattern\n";
        cout << "4. Right Half Number Triangle\n";
        cout << "5. Full Number Pyramid\n";
        cout << "6. Full Alphabet Pyramid\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        // 1. Numeric Pattern
        case 1:
            cout << "\n1 - Numeric Pattern\n\n";

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;

        // 2. Lowercase Alphabet Pattern
        case 2:
            cout << "\n2 - Lowercase Alphabet Pattern\n\n";

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << char('a' + j - 1) << " ";
                }
                cout << endl;
            }
            break;

        // 3. Uppercase Alphabet Pattern
        case 3:
            cout << "\n3 - Uppercase Alphabet Pattern\n\n";

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << char('A' + j - 1) << " ";
                }
                cout << endl;
            }
            break;

        // 4. Right Half Number Triangle
        case 4:
            cout << "\n4 - Right Half Number Triangle\n\n";

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;

        // 5. Full Number Pyramid
        case 5:
            cout << "\n5 - Full Number Pyramid\n\n";

            for (int i = 1; i <= n; i++)
            {
                // Spaces
                for (int j = 1; j <= n - i; j++)
                {
                    cout << " ";
                }

                // Increasing numbers
                for (int j = 1; j <= i; j++)
                {
                    cout << j << " ";
                }

                // Decreasing numbers
                for (int j = i - 1; j >= 1; j--)
                {
                    cout << j << " ";
                }

                cout << endl;
            }
            break;

        // 6. Full Alphabet Pyramid
        case 6:
            cout << "\n6 - Full Alphabet Pyramid\n\n";

            for (int i = 1; i <= n; i++)
            {
                // Spaces
                for (int j = 1; j <= n - i; j++)
                {
                    cout << " ";
                }

                // Increasing alphabets
                for (int j = 1; j <= i; j++)
                {
                    cout << char('A' + j - 1) << " ";
                }

                // Decreasing alphabets
                for (int j = i - 1; j >= 1; j--)
                {
                    cout << char('A' + j - 1) << " ";
                }

                cout << endl;
            }
            break;

        case 7:
            cout << "\nExiting program...\n";
            break;

        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 7);

    return 0;
}
