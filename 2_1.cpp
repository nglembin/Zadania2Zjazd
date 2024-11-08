#include <iostream>
using namespace std;

int main() {
    int n, sumaCala = 0;

    cout << "Podaj wartość n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int sumaCzesciowa = 0;
        for (int j = 1; j <= i; j++) {
            sumaCzesciowa += j; 
        }
        sumaCala += sumaCzesciowa; 
    }

    cout << "Suma szeregu: " << sumaCala << endl;
    return 0;
}