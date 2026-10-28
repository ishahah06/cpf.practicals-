#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {
    string paragraph, additional, keyword, word;

    cout << "********************************************\n";
    cout << "         DOCUMENT TEXT ANALYZER\n";
    cout << "********************************************\n";

    // Part A: Input and text analysis
    cout << "Enter Paragraph:\n";
    getline(cin, paragraph);

    int characters = paragraph.length();
    int alphabets = 0, digits = 0, special = 0, words = 0;
    bool insideWord = false;

    for (char ch : paragraph) {
        unsigned char c = static_cast<unsigned char>(ch);

        if (isalpha(c))
            alphabets++;
        else if (isdigit(c))
            digits++;
        else if (!isspace(c))
            special++;

        if (isspace(c)) {
            insideWord = false;
        } else if (!insideWord) {
            words++;
            insideWord = true;
        }
    }

    cout << "\n--------------------------------------------\n";
    cout << "Text Analysis\n";
    cout << "--------------------------------------------\n";
    cout << "Characters : " << characters << '\n';
    cout << "Words : " << words << '\n';
    cout << "Alphabets : " << alphabets << '\n';
    cout << "Digits : " << digits << '\n';
    cout << "Special Characters : " << special << '\n';

    // Part B: String extraction
    string firstWord, lastWord;
    int firstSpace = paragraph.find(' ');
    int lastSpace = paragraph.find_last_of(' ');

    if (firstSpace == string::npos) {
        firstWord = paragraph;
    } else {
        firstWord = paragraph.substr(0, firstSpace);
    }

    if (lastSpace == string::npos) {
        lastWord = paragraph;
    } else {
        lastWord = paragraph.substr(lastSpace + 1);
    }

    cout << "\n--------------------------------------------\n";
    cout << "String Extraction\n";
    cout << "--------------------------------------------\n";

    if (!paragraph.empty()) {
        cout << "First Word : " << firstWord << '\n';
        cout << "Last Word : " << lastWord << '\n';
        cout << "First Character : " << paragraph.front() << '\n';
        cout << "Last Character : " << paragraph.back() << '\n';
    } else {
        cout << "The paragraph is empty.\n";
    }

    // Part C: Concatenation
    cout << "\n--------------------------------------------\n";
    cout << "Concatenation\n";
    cout << "--------------------------------------------\n";
    cout << "Enter Additional Sentence:\n";
    getline(cin, additional);

    paragraph += "\n" + additional;

    cout << "Updated Paragraph:\n";
    cout << paragraph << '\n';

    // Part D: Pattern matching
    cout << "\n--------------------------------------------\n";
    cout << "Pattern Matching\n";
    cout << "--------------------------------------------\n";
    cout << "Enter Search Word: ";
    getline(cin, keyword);

    size_t position = paragraph.find(keyword);

    if (position != string::npos) {
        cout << "Keyword Found\n";
        cout << "First Occurrence Position : "
             << position << '\n';
        cout << "(Position is zero-based.)\n";
    } else {
        cout << "Keyword Not Found\n";
    }

    // Part E: String transformation
    string upper = paragraph;
    string lower = paragraph;

    transform(upper.begin(), upper.end(), upper.begin(),
        [](unsigned char c) {
            return static_cast<char>(toupper(c));
        });

    transform(lower.begin(), lower.end(), lower.begin(),
        [](unsigned char c) {
            return static_cast<char>(tolower(c));
        });

    cout << "\n--------------------------------------------\n";
    cout << "String Transformation\n";
    cout << "--------------------------------------------\n";

    cout << "Uppercase:\n" << upper << '\n';
    cout << "\nLowercase:\n" << lower << '\n';

    string reversed = paragraph;
    reverse(reversed.begin(), reversed.end());

    cout << "\nReverse:\n" << reversed << '\n';

    // Palindrome check
    cout << "\n--------------------------------------------\n";
    cout << "Palindrome Check\n";
    cout << "Enter Word: ";
    getline(cin, word);

    string reversedWord = word;

    transform(word.begin(), word.end(), word.begin(),
        [](unsigned char c) {
            return static_cast<char>(tolower(c));
        });

    transform(reversedWord.begin(), reversedWord.end(),
        reversedWord.begin(),
        [](unsigned char c) {
            return static_cast<char>(tolower(c));
        });

    reverse(reversedWord.begin(), reversedWord.end());

    if (word == reversedWord)
        cout << "Result : Palindrome\n";
    else
        cout << "Result : Not a Palindrome\n";

    // Part F: Standard C-style string functions
    cout << "\n--------------------------------------------\n";
    cout << "Standard String Functions\n";
    cout << "--------------------------------------------\n";

    char str1[500], str2[500], copied[500], combined[1000];
    char searchText[] = "learning";

    cout << "Enter first string: ";
    cin.getline(str1, 500);

    cout << "Enter second string: ";
    cin.getline(str2, 500);

    // strlen()
    cout << "Length : " << strlen(str1) << '\n';

    // strcpy()
    strcpy(copied, str1);
    cout << "String Copied Successfully\n";

    // strcmp()
    int comparison = strcmp(str1, copied);

    if (comparison == 0)
        cout << "Comparison Result : Equal\n";
    else
        cout << "Comparison Result : Not Equal\n";

    // strcat()
    strcpy(combined, str1);
    strcat(combined, str2);
    cout << "Concatenation : " << combined << '\n';

    // strstr()
    if (strstr(str1, searchText) != nullptr)
        cout << "Substring Search : Found\n";
    else
        cout << "Substring Search : Not Found\n";

    // toupper()
    for (int i = 0; str1[i] != '\0'; i++) {
        str1[i] = static_cast<char>(
            toupper(static_cast<unsigned char>(str1[i])));
    }
    cout << "toupper() : " << str1 << '\n';

    // tolower()
    for (int i = 0; str2[i] != '\0'; i++) {
        str2[i] = static_cast<char>(
            tolower(static_cast<unsigned char>(str2[i])));
    }
    cout << "tolower() : " << str2 << '\n';

    return 0;
}
