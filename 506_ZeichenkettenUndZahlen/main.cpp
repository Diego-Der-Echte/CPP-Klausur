#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int stringToIntWithoutMethods(const string& input) {
    int result = 0;
    for (char ch : input) {
        if (ch >= '0' && ch <= '9') {
            result = result * 10 + (ch - '0');
        }
        else {
            cout << "Ungültiges Zeichen gefunden: " << ch << endl;
                return -1;
        }
    }
    return result;
}

vector<int> extractAndConvertNumbers(const string& input) {
    vector<int> numbers;
    string currentNumber = "";

    for (char ch : input) {
        if (isdigit(ch)) {
            currentNumber += ch;
        } else if (!currentNumber.empty()) {
            numbers.push_back(stringToIntWithoutMethods(currentNumber));
            currentNumber = "";
        }
    }

    if (!currentNumber.empty()) {
        numbers.push_back(stringToIntWithoutMethods(currentNumber));
    }

    return numbers;
}

int main() {
    string input;

    cout << "Geben Sie eine Zeichenkette aus Ziffern und Buchstaben ein (max. 7 Stellen Ziffern): ";
    cin >> input;

    for (char ch : input) {
        if (!isdigit(ch) && !isalpha(ch)) {
            cout << "Ungültige Eingabe. Bitte nur Ziffern und Buchstaben eingeben." << endl;
                return 1;
        }
    }

    int number = stringToIntWithoutMethods(input);
    if (number != -1) {
        cout << "Die umgewandelte Zahl (a): " << number << endl;
    }

    vector<int> numbers = extractAndConvertNumbers(input);

    cout << "\nExtrahierte Zahlen (b): " << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "\nVerarbeitete Zahlen (c) werden im Array/Vector gespeichert und angezeigt:\n";
    vector<int> processedNumbers = extractAndConvertNumbers(input);
    for (int num : processedNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
