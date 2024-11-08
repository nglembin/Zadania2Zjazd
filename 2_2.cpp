#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj liczby a i b: ";
    cin >> a >> b;
    cout << "Pobrano liczby a = " << a << ", b = " << b << endl;

    cout << "Wiersz o długości a:\n";
    for (int i = 0; i < a; i++) {
        cout << "*";
    }
    cout << endl;

    cout << "Kolumna o długości b:\n";
    for (int i = 0; i < b; i++) {
        cout << "*" << endl;
    }

    cout << "Prostokąt o wymiarach 'a' na 'b':\n";
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Obwód prostokąta o wymiarach 'a' na 'b':\n";
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            if (i == 0 || i == b - 1 || j == 0 || j == a - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "Trójkąt prostokątny równoramienny z kątem prostym w lewym dolnym rogu:\n";
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Trójkąt prostokątny równoramienny z kątem prostym w prawym górnym rogu:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (j < i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
