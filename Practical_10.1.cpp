#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct AcademicInfo {
    int semester;
    float percentage;
    string grade;
};

struct ContactInfo {
    string mobile;
    string email;
};

struct Student {
    string enrollment, name, branch;
    AcademicInfo academic;
    ContactInfo contact;
};

void displayStudent(const Student* s) {
    cout << s->enrollment << " " << s->name << " " << s->branch << "\n";
    cout << "Semester : " << s->academic.semester << "\n";
    cout << fixed << setprecision(2);
    cout << "Percentage : " << s->academic.percentage << "\n";
    cout << "Grade : " << s->academic.grade << "\n";
    cout << "Mobile : " << s->contact.mobile << "\n";
    cout << "Email : " << s->contact.email << "\n";
    cout << "--------------------------------------------\n";
}

void updateContact(Student* s, const string& mobile, const string& email) {
    s->contact.mobile = mobile;
    s->contact.email = email;
}

void displayAcademic(const Student* s) {
    cout << "Semester : " << s->academic.semester << "\n";
    cout << "Percentage : " << fixed << setprecision(2) << s->academic.percentage << "\n";
    cout << "Grade : " << s->academic.grade << "\n";
}

int main() {
    cout << "********************************************\n";
    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";
    int n;
    cout << "Enter Number of Students : ";
    cin >> n;
    if (!cin || n <= 0) {
        cout << "Invalid number of students.\n";
        return 1;
    }

    Student* students = new Student[n];
    for (int i = 0; i < n; ++i) {
        cout << "--------------------------------------------\n";
        cout << "Student " << i + 1 << "\n";
        cout << "Enrollment Number : "; cin >> students[i].enrollment;
        cout << "Student Name : "; cin.ignore(); getline(cin, students[i].name);
        cout << "Branch : "; cin >> students[i].branch;
        cout << "Semester : "; cin >> students[i].academic.semester;
        cout << "Percentage : "; cin >> students[i].academic.percentage;
        cout << "Grade : "; cin >> students[i].academic.grade;
        cout << "Mobile Number : "; cin >> students[i].contact.mobile;
        cout << "Email ID : "; cin >> students[i].contact.email;
    }

    cout << "--------------------------------------------\n";
    cout << "Student Records\n";
    for (int i = 0; i < n; ++i) displayStudent(&students[i]);

    // Example address-based function use: display academic information.
    for (int i = 0; i < n; ++i) displayAcademic(&students[i]);

    delete[] students;
    cout << "Program Executed Successfully\n";
    cout << "--------------------------------------------\n";
    return 0;
}
