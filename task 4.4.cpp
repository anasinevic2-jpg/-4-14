#include <iostream>
using namespace std;
int main() {
    int B;
    cout << "B (-10..20): ";
    cin >> B;
    if (B < -10 || B > 20) { cout << "Ошибка ввода\n"; return 0; }
    int positive = 0;
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 6; ++j) {
            int t = B + i - 2 * j;
            if (t < 0) cout << '-';
            else if (t == 0) cout << '0';
            else { cout << '+'; ++positive; }
            if (j < 5) cout << ' ';
        }
        cout << '\n';
    }
    cout << "Положительных ячеек: " << positive << "\n";
    return 0;
}