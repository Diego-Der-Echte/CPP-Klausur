#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;


int main() {
    double anfangstemperatur = 85.0;
    double room_temp = 20.0;    // Raumtemperatur in °C
    double tolerance = 2.0;     // Toleranzgrenze zur Raumtemperatur in °C
    double cooling_rate = 0.1;  // Abkühlrate (10%)

    double current_temp = initial_temp; // Anfangstemperatur
    int minutes = 0;                    // Minuten-Zähler

    // Ausgabeformat festlegen
    std::cout << std::fixed << std::setprecision(2);

    // Berechnung der Temperaturveränderung pro Minute
    extracted(room_temp, tolerance, cooling_rate, current_temp, minutes);

    // Ausgabe der letzten Minute innerhalb der Toleranz
    std::cout << "Minute " << minutes << ": " << current_temp << " °C"
              << std::endl;
    std::cout << "Der Kaffee hat nach " << minutes
              << " Minuten annähernd die Raumtemperatur erreicht." << std::endl;

        return 0;
}
