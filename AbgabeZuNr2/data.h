#ifndef DATA_H
#define DATA_H

#include <fstream>
 /*#include <QString>
#include <QStringList>*/

using namespace std;

class data
{
public:
    data();
    void fileOpen();
    void fileClose();


private:
    int zahl1;
    int zahl2;

};

#endif // DATA_H
