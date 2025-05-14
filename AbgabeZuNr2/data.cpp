#include "data.h"

using namespace std;

data::data()
{

}

void fileOpen() {
    ofstream fileOpen("output.txt", std::ios::app);
}
