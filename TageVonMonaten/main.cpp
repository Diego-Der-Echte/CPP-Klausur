#include <iostream>

using namespace std;

int main()
{
    int monate;
    int schaltjahr;


    cout << "Von welchen Monat moechten Sie die Tage wissen?" << endl;
                cin >> monate;
    cout << "Ist dieses Jahr ein Schaltjahr? (1=Nein) (2=Ja)" << endl;
                cin >> schaltjahr;
    switch (schaltjahr) {
                case 1:
    if((monate == 1)||(monate == 3)||(monate == 5)||(monate == 7)||(monate == 8)||(monate == 10)||(monate == 12)) {
                cout << "31 Tage im Monat und 365 im Jahr" << endl;
                }
    if (monate == 2) {
                cout << "28 Tage im Monat und 365 im Jahr" << endl;
                }
    if ((monate == 4)||(monate == 6)||(monate == 9)||(monate == 11)) {
                cout << "30 Tage im Monat und 365 im Jahr" << endl;
                }
    if (monate >= 13) {
                cout << "Die Monate sind zu hoch!" << endl;
                }
                break;

                case 2:
    if((monate == 1)||(monate == 3)||(monate == 5)||(monate == 7)||(monate == 8)||(monate == 10)||(monate == 12)) {
                    cout << "31 Tage im Monat und 366 im Jahr" << endl;
                }
    if (monate == 2) {
                cout << "29 Tage im Monat und 366 im Jahr" << endl;
    }
    if ((monate == 4)||(monate == 6)||(monate == 9)||(monate == 11)) {
                cout << "30 Tage im Monat und 366 im Jahr" << endl;
    }
    if (monate >= 13) {
                cout << "Die Monate sind zu hoch!" << endl;
    }
    break;
                }


    return 0;
}
