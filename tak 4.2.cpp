#include <iostream>
using namespace std;
int main() {
    long long a, b;
    cout << "a b (1..1000000): ";
    cin >> a >> b;
    if (a < 1 || a > 1000000 || b < 1 || b > 1000000) {
        cout << "Ошибка ввода\n"; return 0;
    }
    long long x = a, y = b;
    int swaps = 0;
    while (y != 0) {
        long long r = x % y;
        x = y;
        y = r;
        ++swaps;
    }
    cout << "НОД: " << x << "\n";
    cout << "Замен: " << swaps << "\n";
    return 0;
}