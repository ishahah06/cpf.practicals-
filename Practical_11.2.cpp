#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    cout << "********************************************\n";
    cout << "FILE ORGANIZATION & FILE OPERATIONS UTILITY\n";
    cout << "********************************************\n";

    ofstream out("Document.txt");
    if (!out) {
        cout << "Error : Unable to create Document.txt\n";
        return 1;
    }
    cout << "Document.txt Created Successfully\n";
    cout << "--------------------------------------------\n";
    cout << "Enter File Contents\n";

    string lines[] = {
        "Programming Fundamentals Laboratory",
        "Student Record Management System",
        "File Handling Practical"
    };
    for (const string& line : lines) out << line << '\n';
    out.close();

    cout << lines[0] << "\n" << lines[1] << "\n" << lines[2] << "\n";
    cout << "--------------------------------------------\n";
    cout << "Data Written Successfully\n";
    cout << "--------------------------------------------\n";

    ifstream in("Document.txt");
    if (!in) {
        cout << "Error : Unable to open Document.txt for reading\n";
        return 1;
    }
    cout << "Reading Document.txt\n";
    string line;
    while (getline(in, line)) cout << line << "\n";
    cout << "--------------------------------------------\n";
    cout << "End of File Reached Successfully\n";
    in.close();
    cout << "--------------------------------------------\n";

    ifstream source("Document.txt", ios::binary);
    ofstream backup("BackupDocument.txt", ios::binary);
    if (!source || !backup) {
        cout << "Error : Unable to open source or backup file\n";
        return 1;
    }
    cout << "Creating BackupDocument.txt\n";
    backup << source.rdbuf();
    source.close();
    backup.close();
    cout << "Contents Copied Successfully\n";
    cout << "Backup File Created Successfully\n";
    cout << "--------------------------------------------\n";

    fstream file("Document.txt", ios::in | ios::binary);
    if (!file) {
        cout << "Error : Unable to reopen Document.txt\n";
        return 1;
    }
    file.seekg(0, ios::end);
    cout << "Current File Position : " << file.tellg() << "\n";
    cout << "Moving File Pointer...\n";
    file.seekg(38, ios::beg);
    cout << "Displaying Contents after Repositioning\n";
    getline(file, line);
    cout << line << "\n";
    cout << "--------------------------------------------\n";
    cout << "Resetting File Pointer\n";
    file.clear();
    file.seekg(0, ios::beg);
    while (getline(file, line)) cout << line << "\n";
    file.close();

    cout << "--------------------------------------------\n";
    cout << "Program Executed Successfully\n";
    cout << "--------------------------------------------\n";
    return 0;
}
