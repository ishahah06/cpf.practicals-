#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    string id[MAX], name[MAX];
    int score[MAX];
    int n, total = 0;

    cout << "********************************************\n";
    cout << "      SPORTS EVENT SCORE ANALYSIS\n";
    cout << "********************************************\n";

    cout << "Enter Number of Participants: ";
    cin >> n;

    if (n <= 0 || n > MAX) {
        cout << "Invalid number of participants!\n";
        return 0;
    }

    // Input participant records
    for (int i = 0; i < n; i++) {
        cout << "\nEnter Participant ID: ";
        cin >> id[i];

        cout << "Enter Participant Name: ";
        cin >> name[i];

        cout << "Enter Score: ";
        cin >> score[i];

        total += score[i];
    }

    // Initialize highest and lowest scores
    int highest = score[0];
    int lowest = score[0];

    for (int i = 1; i < n; i++) {
        if (score[i] > highest)
            highest = score[i];

        if (score[i] < lowest)
            lowest = score[i];
    }

    // Display participant records
    cout << "\n----------------------------------------------\n";
    cout << "Participant Performance\n";
    cout << "----------------------------------------------\n";

    cout << left << setw(15) << "ID"
         << setw(20) << "Name"
         << "Score\n";

    cout << "----------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << left << setw(15) << id[i]
             << setw(20) << name[i]
             << score[i] << '\n';
    }

    // Display score analysis
    double average = static_cast<double>(total) / n;

    cout << "----------------------------------------------\n";
    cout << "Total Score: " << total << '\n';
    cout << fixed << setprecision(2);
    cout << "Average Score: " << average << '\n';
    cout << "Highest Score: " << highest << '\n';
    cout << "Lowest Score: " << lowest << '\n';

    return 0;
}
