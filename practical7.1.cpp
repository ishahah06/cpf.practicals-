#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char enrollment[30];
    char studentName[100];
    char branch[30];
    char referenceID[150];
    char keyword[50];

    char firstName[50];
    char lastName[50];

    cout << "********************************************\n";
    cout << "   STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";

    cout << "Enter Enrollment Number: ";
    cin.getline(enrollment, 30);

    cout << "Enter Student Name: ";
    cin.getline(studentName, 100);

    cout << "Enter Branch: ";
    cin.getline(branch, 30);

    // Generate reference ID manually
    int i = 0;
    int j = 0;

    while (studentName[i] != '\0') {
        referenceID[j++] = studentName[i++];
    }

    referenceID[j++] = '-';

    i = 0;
    while (enrollment[i] != '\0') {
        referenceID[j++] = enrollment[i++];
    }

    referenceID[j] = '\0';

    cout << "\n--------------------------------------------\n";
    cout << "Student Reference\n";
    cout << referenceID << '\n';

    // Extract first name manually
    i = 0;
    while (studentName[i] != ' ' &&
           studentName[i] != '\0') {
        firstName[i] = studentName[i];
        i++;
    }
    firstName[i] = '\0';

    // Extract last name manually
    int length = strlen(studentName);
    int lastSpace = -1;

    for (i = 0; i < length; i++) {
        if (studentName[i] == ' ') {
            lastSpace = i;
        }
    }

    if (lastSpace != -1) {
        j = 0;

        for (i = lastSpace + 1; i < length; i++) {
            lastName[j++] = studentName[i];
        }

        lastName[j] = '\0';
    } else {
        strcpy(lastName, firstName);
    }

    cout << "--------------------------------------------\n";
    cout << "First Name: " << firstName << '\n';
    cout << "Last Name: " << lastName << '\n';

    // Search keyword
    cout << "--------------------------------------------\n";
    cout << "Enter Keyword: ";
    cin.getline(keyword, 50);

    if (strstr(studentName, keyword) != nullptr) {
        cout << "Keyword Found.\n";
    } else {
        cout << "Keyword Not Found.\n";
    }

    // Standard string functions for reference ID
    char standardReference[150];

    strcpy(standardReference, studentName);
    strcat(standardReference, "-");
    strcat(standardReference, enrollment);

    cout << "\n--------------------------------------------\n";
    cout << "Student Report\n";
    cout << "--------------------------------------------\n";
    cout << "Enrollment Number: " << enrollment << '\n';
    cout << "Student Name: " << studentName << '\n';
    cout << "Branch: " << branch << '\n';
    cout << "Reference ID: " << standardReference << '\n';

    return 0;
}
