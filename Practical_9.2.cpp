#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {
    string enrollment, name, branch, grade;
    int semester;
    float percentage;
};

void displayStudents(const Student* students, int count) {
    cout << "Student Records using Address-based Access\n";
    for (int i = 0; i < count; ++i) {
        const Student* current = students + i;
        cout << "Address : " << static_cast<const void*>(current) << "\n";
        cout << current->enrollment << " " << current->name << " "
             << current->branch << " " << current->semester << " "
             << fixed << setprecision(2) << current->percentage << " "
             << current->grade << "\n";
        cout << "--------------------------------------------\n";
    }
}

float classAverage(const Student* students, int count) {
    float total = 0;
    for (int i = 0; i < count; ++i) total += (students + i)->percentage;
    return count ? total / count : 0;
}

void displayHighestLowest(const Student* students, int count) {
    if (count == 0) return;
    float high = students[0].percentage, low = students[0].percentage;
    for (int i = 1; i < count; ++i) {
        if (students[i].percentage > high) high = students[i].percentage;
        if (students[i].percentage < low) low = students[i].percentage;
    }
    cout << "Highest Percentage : " << high << " %\n";
    cout << "Lowest Percentage : " << low << " %\n";
}

int main() {
    cout << "********************************************\n";
    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";

    int count;
    cout << "Enter Number of Students : ";
    cin >> count;
    if (!cin || count <= 0) {
        cout << "Invalid number of students.\n";
        return 1;
    }

    Student* students = new Student[count];
    cout << "Dynamic Memory Allocated Successfully\n";
    cout << "--------------------------------------------\n";
    cout << "Enter Student Details\n\n";

    for (int i = 0; i < count; ++i) {
        cout << "Student " << i + 1 << "\n";
        cout << "Enrollment Number : "; cin >> students[i].enrollment;
        cout << "Student Name : ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Branch : "; cin >> students[i].branch;
        cout << "Semester : "; cin >> students[i].semester;
        cout << "Percentage : "; cin >> students[i].percentage;
        cout << "Grade : "; cin >> students[i].grade;
        cout << "--------------------------------------------\n";
    }

    cout << fixed << setprecision(2);
    displayStudents(students, count);
    cout << "Academic Summary\n";
    cout << "Class Average Percentage : " << classAverage(students, count) << " %\n";
    displayHighestLowest(students, count);
    cout << "--------------------------------------------\n";

    delete[] students;
    students = nullptr;
    cout << "Dynamic Memory Released Successfully\n";
    cout << "Address Variable Reset Successfully\n";
    cout << "--------------------------------------------\n";
    cout << "Program Executed Successfully\n";
    cout << "--------------------------------------------\n";
    return 0;
}
