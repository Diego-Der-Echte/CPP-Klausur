#include <iostream>

using namespace std;

def text_löschen(text, position):
    """Löscht das Zeichen an der angegebenen Position."""
    if 0 <= position < len(text):
        return text[:position] + text[position + 1:]
    else:
        print("Ungültige Position!")
        return text

def zeichen_ersetzen(text, position, neues_zeichen):
    """Ersetzt das Zeichen an der angegebenen Position."""
    if 0 <= position < len(text):
        return text[:position] + neues_zeichen + text[position + 1:]
    else:
        print("Ungültige Position!")
        return text

def zeichen_einfuegen(text, position, neues_zeichen):
    """Fügt ein Zeichen an der angegebenen Position ein."""
    if 0 <= position <= len(text):  # Position kann auch am Ende des Textes sein
        return text[:position] + neues_zeichen + text[position:]
    else:
        print("Ungültige Position!")
        return text

def mehrere_zeichen_löschen(text, start_position, anzahl):
    """Löscht mehrere Zeichen ab einer Startposition."""
    if 0 <= start_position < len(text):
        return text[:start_position] + text[start_position + anzahl:]
    else:
        print("Ungültige Startposition!")
        return text

def mehrere_zeichen_einfuegen(text, position, neues_zeichen):
    """Fügt mehrere Zeichen an einer angegebenen Position ein."""
    if 0 <= position <= len(text):
        return text[:position] + neues_zeichen + text[position:]
    else:
        print("Ungültige Position!")
        return text

def mehrere_zeichen_ersetzen(text, start_position, anzahl, neues_zeichen):
    """Ersetzt mehrere Zeichen ab einer Startposition."""
    if 0 <= start_position < len(text):
        return text[:start_position] + neues_zeichen + text[start_position + anzahl:]
    else:
        print("Ungültige Startposition!")
        return text

def main():
    """Hauptfunktion, um mit dem Benutzer zu interagieren."""
    text = input("Bitte geben Sie einen Text ein: ")

    while True:
        print("\nAktueller Text: ", text)
        print("\nWählen Sie eine Option:")
        print("1: Zeichen löschen")
        print("2: Zeichen ersetzen")
        print("3: Zeichen einfügen")
        print("4: Mehrere Zeichen löschen")
        print("5: Mehrere Zeichen einfügen")
        print("6: Mehrere Zeichen ersetzen")
        print("7: Beenden")

        option = input("Ihre Wahl: ")

        if option == '1':  # Zeichen löschen
            position = int(input("Geben Sie die Position des zu löschenden Zeichens an: "))
            text = text_löschen(text, position)

        elif option == '2':  # Zeichen ersetzen
            position = int(input("Geben Sie die Position des zu ersetzenden Zeichens an: "))
            neues_zeichen = input("Geben Sie das neue Zeichen ein: ")
            text = zeichen_ersetzen(text, position, neues_zeichen)

        elif option == '3':  # Zeichen einfügen
            position = int(input("Geben Sie die Position zum Einfügen des Zeichens an: "))
            neues_zeichen = input("Geben Sie das einzufügende Zeichen ein: ")
            text = zeichen_einfuegen(text, position, neues_zeichen)

        elif option == '4':  # Mehrere Zeichen löschen
            start_position = int(input("Geben Sie die Startposition an, von der aus die Zeichen gelöscht werden sollen: "))
            anzahl = int(input("Geben Sie die Anzahl der zu löschenden Zeichen an: "))
            text = mehrere_zeichen_löschen(text, start_position, anzahl)

        elif option == '5':  # Mehrere Zeichen einfügen
            position = int(input("Geben Sie die Position zum Einfügen der Zeichen an: "))
            neues_zeichen = input("Geben Sie die einzufügenden Zeichen ein: ")
            text = mehrere_zeichen_einfuegen(text, position, neues_zeichen)

        elif option == '6':  # Mehrere Zeichen ersetzen
            start_position = int(input("Geben Sie die Startposition an, an der die Zeichen ersetzt werden sollen: "))
            anzahl = int(input("Geben Sie die Anzahl der zu ersetzenden Zeichen an: "))
            neues_zeichen = input("Geben Sie das neue Zeichen ein: ")
            text = mehrere_zeichen_ersetzen(text, start_position, anzahl, neues_zeichen)

        elif option == '7':  # Beenden
            print("Programm beendet.")
            break
        else:
            print("Ungültige Auswahl. Versuchen Sie es erneut.")

if __name__ == "__main__":
    main()

                                                                                        return 0;
