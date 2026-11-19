#include <iostream>
using namespace std;
int main() {
    int accepted = 0;   
    int above20 = 0;   
    int streak = 0;     
    do {
        int t;
        cin >> t;
        if (t < -20 || t > 40) continue; 
        ++accepted;
        if (t > 20) {
            ++above20;
            ++streak;
        }
        else {
            streak = 0; 
        }
    } while (streak < 3);
    cout << "Принятых измерений: " << accepted << "\n";
    cout << "Значений выше 20: " << above20 << "\n";
    return 0;
}