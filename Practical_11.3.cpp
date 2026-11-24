#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

struct Student {
    string enrollment, name, branch, grade;
    int semester;
    float percentage;
};

int main() {
    cout << "********************************************\n";
    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";

    ofstream create("StudentRecords.txt");
    if (!create) {
        cout << "Error : Student record file cannot be created.\n";
        return 1;
    }
    create.close();
    cout << "StudentRecords.txt Created Successfully\n";
    cout << "--------------------------------------------\n";

    int n;
    cout << "Enter Number of Students : ";
    if (!(cin >> n) || n <= 0) {
        cout << "Error : Invalid number of students.\n";
        return 1;
    }

    ofstream writeFile("StudentRecords.txt");
    if (!writeFile) {
        cout << "Error : Student record file cannot be opened for writing.\n";
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        Student s;
        cout << "--------------------------------------------\n";
        cout << "Student " << i + 1 << "\n";
        cout << "Enrollment Number : "; cin >> s.enrollment;
        cout << "Student Name : "; cin.ignore(); getline(cin, s.name);
        cout << "Branch : "; cin >> s.branch;
        cout << "Semester : "; cin >> s.semester;
        cout << "Percentage : "; cin >> s.percentage;
        cout << "Grade : "; cin >> s.grade;

        writeFile << s.enrollment << '\n'
                  << s.name << '\n'
                  << s.branch << '\n'
                  << s.semester << '\n'
                  << s.percentage << '\n'
                  << s.grade << '\n';
    }
    writeFile.close();

    cout << "--------------------------------------------\n";
    cout << "Student Records Stored Successfully\n";
    cout << "--------------------------------------------\n";
    cout << "Reading StudentRecords.txt\n";

    ifstream readFile("StudentRecords.txt");
    if (!readFile) {
        cout << "Error : Student record file cannot be opened for reading.\n";
        return 1;
    }

    Student s;
    while (getline(readFile, s.enrollment)) {
        if (!getline(readFile, s.name)) break;
        if (!getline(readFile, s.branch)) break;
        if (!(readFile >> s.semester >> s.percentage)) break;
        readFile.ignore(numeric_limits<streamsize>::max(), '\n');
        if (!getline(readFile, s.grade)) break;

        cout << "Enrollment : " << s.enrollment << "\n";
        cout << "Name : " << s.name << "\n";
        cout << "Branch : " << s.branch << "\n";
        cout << "Semester : " << s.semester << "\n";
        cout << fixed << setprecision(2);
        cout << "Percentage : " << s.percentage << "\n";
        cout << "Grade : " << s.grade << "\n";
        cout << "--------------------------------------------\n";
    }
    readFile.close();
    cout << "End of File Reached Successfully\n";
    cout << "--------------------------------------------\n";

    ifstream source("StudentRecords.txt", ios::binary);
    ofstream backup("BackupStudentRecords.txt", ios::binary);
    if (!source || !backup) {
        cout << "Error : Backup file cannot be created.\n";
        return 1;
    }
    cout << "Creating BackupStudentRecords.txt\n";
    backup << source.rdbuf();
    source.close();
    backup.close();
    cout << "Backup Completed Successfully\n";
    cout << "--------------------------------------------\n";
    cout << "Program Executed Successfully\n";
    cout << "--------------------------------------------\n";
    return 0;
}
