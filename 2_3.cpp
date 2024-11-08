#include <iostream>
using namespace std;

int main() {
    int miesiac;

    cout << "Podaj numer miesiąca (1-12): ";
    cin >> miesiac;

    if (miesiac < 1 || miesiac > 12) {
        cout << "Podana liczba jest spoza przedziału [1, 12]." << endl;
        return 0; 
    }

    string nazwaMiesiaca;
    int dni = 0;
    bool czySlonecznie = false;

    switch (miesiac) {
        case 1:
            nazwaMiesiaca = "Styczen";
            dni = 31;
            czySlonecznie = false;
            break;
        case 2:
            nazwaMiesiaca = "Luty";
            dni = 28;
            czySlonecznie = false;
            break;
        case 3:
            nazwaMiesiaca = "Marzec";
            dni = 31;
            czySlonecznie = false;
            break;
        case 4:
            nazwaMiesiaca = "Kwiecien";
            dni = 30;
            czySlonecznie = true;
            break;
        case 5:
            nazwaMiesiaca = "Maj";
            dni = 31;
            czySlonecznie = true;
            break;
        case 6:
            nazwaMiesiaca = "Czerwiec";
            dni = 30;
            czySlonecznie = true;
            break;
        case 7:
            nazwaMiesiaca = "Lipiec";
            dni = 31;
            czySlonecznie = true;
            break;
        case 8:
            nazwaMiesiaca = "Sierpien";
            dni = 31;
            czySlonecznie = true;
            break;
        case 9:
            nazwaMiesiaca = "Wrzesien";
            dni = 30;
            czySlonecznie = true;
            break;
        case 10:
            nazwaMiesiaca = "Pazdziernik";
            dni = 31;
            czySlonecznie = false;
            break;
        case 11:
            nazwaMiesiaca = "Listopad";
            dni = 30;
            czySlonecznie = false;
            break;
        case 12:
            nazwaMiesiaca = "Grudzien";
            dni = 31;
            czySlonecznie = false;
            break;
    }

    // Wyświetlanie wyników
    cout << "Miesiac: " << nazwaMiesiaca << endl;
    cout << "Liczba dni: " << dni << endl;
    cout << "Pogoda: " << (czySlonecznie ? "Slonecznie" : "Pochmurno") << endl;

    return 0;
}
