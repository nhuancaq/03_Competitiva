#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long suma_total = n * (n + 1) / 2;

    for (int i = 0; i < n - 1; i++) {
        long long num;
        cin >> num;
        suma_total = suma_total - num;
    }

    cout << suma_total << endl;

    return 0;
}





