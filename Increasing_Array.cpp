#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long movimientos = 0;
    long long anterior, actual;

    cin >> anterior; // Leemos el primer elemento

    for (int i = 1; i < n; i++) {
        cin >> actual;
        if (actual < anterior) {
            movimientos += (anterior - actual);
        } else {
            anterior = actual;
        }
    }

    cout << movimientos << endl;

    return 0;
}

