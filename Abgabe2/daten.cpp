#include "daten.h"
#include <fstream>

MarkdownStorage::MarkdownStorage(const std::string& fname) : dateiname(fname) {}

void MarkdownStorage::speichereOperation(const std::string& rechnung, double ergebnis) {
    std::ofstream file(dateiname, std::ios::app);
    if (file.is_open()) {
        file << "### Berechnung:\n```\n" << rechnung << " = " << ergebnis << "\n```\n\n";
    }
    file.close();
}

void MarkdownStorage::loescheInhalt() {
    std::ofstream file(dateiname, std::ios::trunc);
    file.close();
}
