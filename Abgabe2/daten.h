#ifndef MARKDOWNSTORAGE_H
#define MARKDOWNSTORAGE_H

#include <string>

class MarkdownStorage {
public:
    MarkdownStorage(const std::string& dateiname);

    void speichereOperation(const std::string& rechnung, double ergebnis);
    void loescheInhalt();

private:
    std::string dateiname;
};

#endif // MARKDOWNSTORAGE_H
