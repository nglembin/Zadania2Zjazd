#include <iostream>
using namespace std;

int main() {
    int wysokosc;

    cout << "Podaj wysokość diamentu: ";
    cin >> wysokosc;

    if (wysokosc % 2 == 0) {
        cout << "Wysokość diamentu musi być liczbą nieparzystą." << endl;
        return 1;
    }

    int srodekWysokosci = wysokosc / 2; 

    for (int i = 0; i <= srodekWysokosci; ++i) {
        for (int j = 0; j < srodekWysokosci - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = srodekWysokosci - 1; i >= 0; --i) {
        for (int j = 0; j < srodekWysokosci - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}