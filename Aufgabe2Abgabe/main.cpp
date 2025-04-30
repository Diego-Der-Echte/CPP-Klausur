#include "ui.h"
#include "rechner.h"
#include "daten.h"

using namespace std;

int main() {
    Daten daten;
    Rechner rechner(&daten);
    Ui ui(&rechner);
    ui.start();

    return 0;
}
