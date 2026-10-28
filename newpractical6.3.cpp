#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

const int MAX = 100;

string enrollment[MAX];
string name[MAX];
string grade[MAX];
double percentage[MAX];

int n;

// Function to display student records
void displayRecords(const string title[]) = delete;

void displayRecords(string title) {
    cout << "\n--------------------------------------------\n";
    cout << title << '\n';
    cout << "--------------------------------------------\n";

    if (n == 0) {
        cout << "No student records available.\n";
        return;
    }

    cout << left
         << setw(15) << "Enrollment"
         << setw(25) << "Name"
         << setw(12) << "Percentage"
         << "Grade\n";

    for (int i = 0; i < n; i++) {
        cout << left
             << setw(15) << enrollment[i]
             << setw(25) << name[i]
             << setw(12) << fixed << setprecision(2)
             << percentage[i]
             << grade[i] << '\n';
    }
}

// Function to read student details
void inputStudent(int i) {
    cout << "Enter Enrollment Number: ";
    cin >> enrollment[i];

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Student Name: ";
    getline(cin, name[i]);

    cout << "Enter Percentage: ";
    cin >> percentage[i];

    cout << "Enter Grade: ";
    cin >> grade[i];
}

int main() {
    cout << "********************************************\n";
    cout << "   STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";

    cout << "Enter Number of Students: ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid number of students!\n";
        return 0;
    }

    // Accept initial student records
    cout << "\nEnter Student Details\n";

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << '\n';
        inputStudent(i);
    }

    displayRecords("Current Student Records");

    // INSERTION
    cout << "\nInsert New Student\n";

    if (n < MAX) {
        int pos;
        cout << "Enter Position (1 to " << n + 1 << "): ";
        cin >> pos;

        if (pos >= 1 && pos <= n + 1) {
            // Shift records to the right
            for (int i = n; i >= pos; i--) {
                enrollment[i] = enrollment[i - 1];
                name[i] = name[i - 1];
                percentage[i] = percentage[i - 1];
                grade[i] = grade[i - 1];
            }

            cout << "\nEnter New Student Details\n";
            inputStudent(pos - 1);

            n++;

            cout << "Record Inserted Successfully.\n";
            displayRecords("Updated Student Records");
        } else {
            cout << "Invalid position! Insertion cancelled.\n";
        }
    } else {
        cout << "Array is full. Cannot insert another record.\n";
    }

    // UPDATION
    string searchEnrollment;
    cout << "\nUpdate Student Record\n";
    cout << "Enter Enrollment Number: ";
    cin >> searchEnrollment;

    int found = -1;

    for (int i = 0; i < n; i++) {
        if (enrollment[i] == searchEnrollment) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        cout << "Enter New Percentage: ";
        cin >> percentage[found];

        cout << "Enter New Grade: ";
        cin >> grade[found];

        cout << "Record Updated Successfully.\n";
    } else {
        cout << "Student not found!\n";
    }

    displayRecords("Student Records After Updation");

    // DELETION
    cout << "\nDelete Student Record\n";

    if (n > 0) {
        int pos;
        cout << "Enter Position (1 to " << n << "): ";
        cin >> pos;

        if (pos >= 1 && pos <= n) {
            // Shift remaining records to the left
            for (int i = pos - 1; i < n - 1; i++) {
                enrollment[i] = enrollment[i + 1];
                name[i] = name[i + 1];
                percentage[i] = percentage[i + 1];
                grade[i] = grade[i + 1];
            }

            n--;

            cout << "Record Deleted Successfully.\n";
        } else {
            cout << "Invalid position! Deletion cancelled.\n";
        }
    } else {
        cout << "No records available to delete.\n";
    }

    displayRecords("Final Student Records");

    return 0;
}
