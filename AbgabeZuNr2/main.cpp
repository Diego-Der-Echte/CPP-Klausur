#include <iostream>
#include "ui.h"
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    ui MyUi;
    MyUi.mainLoop();

    return 0;
}
