#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Structure to store student information
struct Student
{
    string enrollmentNumber;
    string studentName;
    string branch;
    int semester;
    float marks[5];
    float totalMarks;
    float percentage;
    string grade;
    string result;
};

// Function 1: Display application header
void displayHeader()
{
    cout << "********************************************\n";
    cout << "       STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";
}

// Function 2: Accept student details
void acceptStudentDetails(Student &s)
{
    cout << "\n----------- Student Registration -----------\n";

    cout << "Enter Enrollment Number : ";
    getline(cin, s.enrollmentNumber);

    cout << "Enter Student Name : ";
    getline(cin, s.studentName);

    cout << "Enter Branch : ";
    getline(cin, s.branch);

    cout << "Enter Semester : ";
    cin >> s.semester;

    cout << "Enter Marks\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " : ";
        cin >> s.marks[i];
    }
}

// Function 3: Calculate academic result
void calculateAcademicResult(Student &s)
{
    s.totalMarks = 0;
    bool passed = true;

    for (int i = 0; i < 5; i++)
    {
        s.totalMarks += s.marks[i];

        // Assume a minimum of 35 marks is required in each subject
        if (s.marks[i] < 35)
        {
            passed = false;
        }
    }

    s.percentage = s.totalMarks / 5.0;

    if (!passed)
    {
        s.grade = "F";
        s.result = "FAIL";
    }
    else
    {
        s.result = "PASS";

        if (s.percentage >= 90)
            s.grade = "A+";
        else if (s.percentage >= 80)
            s.grade = "A";
        else if (s.percentage >= 70)
            s.grade = "B+";
        else if (s.percentage >= 60)
            s.grade = "B";
        else if (s.percentage >= 50)
            s.grade = "C";
        else if (s.percentage >= 35)
            s.grade = "D";
        else
            s.grade = "F";
    }
}

// Function 4: Display complete student report
void displayStudentReport(const Student &s)
{
    cout << "\n--------------------------------------------\n";
    cout << "             Academic Report\n";
    cout << "--------------------------------------------\n";

    cout << "Enrollment Number : " << s.enrollmentNumber << endl;
    cout << "Student Name      : " << s.studentName << endl;
    cout << "Branch            : " << s.branch << endl;
    cout << "Semester          : " << s.semester << endl;
    cout << "Total Marks       : " << s.totalMarks << endl;

    cout << fixed << setprecision(2);
    cout << "Percentage        : " << s.percentage << "%\n";
    cout << "Grade             : " << s.grade << endl;
    cout << "Result            : " << s.result << endl;

    cout << "--------------------------------------------\n";
    cout << "Program Executed Successfully Using "
         << "User-defined Functions.\n";
    cout << "--------------------------------------------\n";
}

int main()
{
    Student s;

    displayHeader();
    acceptStudentDetails(s);
    calculateAcademicResult(s);
    displayStudentReport(s);

    return 0;
}
