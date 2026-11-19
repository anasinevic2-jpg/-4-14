#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "n (1..31): ";
    cin >> n;
    if (n < 1 || n > 31) { cout << "Ошибка ввода\n"; return 0; }
    long long sum = 0;
    int frostDays = 0;
    int curLen = 0, curStart = 0;
    int bestLen = 0, bestStart = 0;
    for (int day = 1; day <= n; ++day) {
        int t;
        cin >> t;
        if (t < -40 || t > 50) { cout << "Ошибка ввода\n"; return 0; }
        sum += t;
        if (t < 0) {
            ++frostDays;
            if (curLen == 0) curStart = day;
            ++curLen;
            if (curLen > bestLen) { bestLen = curLen; bestStart = curStart; }
        }
        else {
            curLen = 0;
        }
    }
    double avg = (double)sum / n;
    cout << "Средняя температура: " << avg << "\n";
    cout << "Морозных дней: " << frostDays << "\n";
    cout << "Самая длинная серия: " << bestLen << ", первый день: " << bestStart << "\n";
    return 0;
}