#include <iostream>

using namespace std;

int main()
{
    double windrichtung;
    double Luftdruck;
    double Regen;
    double Wetter;

    cout << "Von wo kommt der Wind?" << " Westen = 1 , Norden = 2 , Sueden/Osten = 3 " << endl;
        cin >> windrichtung;

    cout << " Wie ist der Luftdruck? " << endl;
        cin >> Luftdruck;

    if ((Luftdruck > 1010)&&(windrichtung = 1)) {
            cout << "Das Wetter ist veraenderlich" << endl;

}   else
            if ((Luftdruck < 1010)&&(windrichtung = 1)) {
            cout << "Das Wetter ist regnerisch" << endl;

}   else
            if ((Luftdruck > 1010)&&(windrichtung = 2)) {
            cout << "Das Wetter ist gut" << endl;

}   else
            if ((Luftdruck < 1010)&&(windrichtung = 2)) {
            cout << "Das Wetter ist veraenderlich" << endl;

}   else
            if ((Luftdruck > 1010)&&(windrichtung = 3)) {
                cout << "Das Wetter ist gut" << endl;

}   else
                if ((Luftdruck < 1010)&&(windrichtung = 3)) {
                cout << "Das Wetter ist veraenderlich" << endl;

}



    return 0;
}
