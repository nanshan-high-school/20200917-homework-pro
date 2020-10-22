#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int coin[11] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
    int a, b;
    char p;
    int price;
    while (cin >> a >> p >> b && (a != 0 || b != 0)) {
        price = a * 100 + b;
        unsigned long long t[price];
        for (int i = 1; i <= price; i++) {
            t[i] = 0;
        }
        t[0] = 1;

        for (int i = 0; i < 11; i++) {
            for (int j = 0; j <= price; j++) {
                if (j + coin[i] <= price) {
                    t[j + coin[i]] += t[j]; 
                }
            }
        }

        cout << setw(4) << a << p << setw(2) << setfill('0') << b;
        cout << setw(17) << setfill(' ') << t[price] << "\n";
    }
}
