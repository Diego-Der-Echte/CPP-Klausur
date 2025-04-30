#include <iostream>

using namespace std;

int main()
{

    string text;
    char suche;
    int n;
    cout << "Geben Sie einen Text ein" << endl;
        getline(cin, text);

    cout << "Nach welchem Zeichen möchten Sie suchen?" << endl;
        cin >> suche;

    for (int i = 0; i < text.size(); i++) {
            n = text.find(suche, i);
            cout << "Das Programm beginnt bei 0 zu zählen!" << endl;
                    cout << n << endl;
}

    return 0;
}
