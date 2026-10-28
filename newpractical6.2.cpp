#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    const int MAX = 100;

    string id[MAX], name[MAX];
    int score[MAX];
    int n;

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
    }

    // Search participant using ID
    string searchID;
    cout << "\n--------------------------------------\n";
    cout << "Search Participant\n";
    cout << "Enter Participant ID: ";
    cin >> searchID;

    int found = -1;

    for (int i = 0; i < n; i++) {
        if (id[i] == searchID) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        cout << "--------------------------------------\n";
        cout << "Participant Found\n";
        cout << "--------------------------------------\n";
        cout << "ID    : " << id[found] << '\n';
        cout << "Name  : " << name[found] << '\n';
        cout << "Score : " << score[found] << '\n';
    } else {
        cout << "Participant not found!\n";
    }

    // Bubble sort in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (score[j] < score[j + 1]) {
                swap(score[j], score[j + 1]);
                swap(id[j], id[j + 1]);
                swap(name[j], name[j + 1]);
            }
        }
    }

    // Display ranking list
    cout << "\n--------------------------------------\n";
    cout << "Ranking List\n";
    cout << "--------------------------------------\n";

    cout << left << setw(10) << "Rank"
         << setw(20) << "Name"
         << "Score\n";

    for (int i = 0; i < n; i++) {
        cout << left << setw(10) << i + 1
             << setw(20) << name[i]
             << score[i] << '\n';
    }

    // Display top three performers
    cout << "\n--------------------------------------\n";
    cout << "Top Three Performers\n";
    cout << "--------------------------------------\n";

    int limit = min(n, 3);

    for (int i = 0; i < limit; i++) {
        cout << i + 1 << ". "
             << name[i] << " - "
             << score[i] << '\n';
    }

    return 0;
}
