#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    char buchstabe;

    // Eingabe des Wortes
    cout << "Gib ein Wort ohne Leerzeichen ein: ";
    cin >> text;

    // Eingabe des zu suchenden Buchstabens
    cout << "Gib den Buchstaben ein, den du suchen möchtest: ";
            cin >> buchstabe;

    // Schleife, um den Buchstaben im Wort zu suchen
    bool gefunden = false;  // Flag, um festzustellen, ob der Buchstabe gefunden wurde
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == buchstabe) {
            cout << "Buchstabe '" << buchstabe << "' gefunden an Position " << i << endl;
            gefunden = true;
            break; // Bei erster Funde das Programm beenden (optional)
        }
    }

    // Wenn der Buchstabe nicht gefunden wurde
    if (!gefunden) {
        cout << "Buchstabe '" << buchstabe << "' wurde nicht gefunden!" << endl;
    }

    return 0;
}
