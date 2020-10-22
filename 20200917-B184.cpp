#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int v[n], c[n];
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            cin >> c[i];
        }

        int d[101];
        for (int i = 0; i < 101; i++) {
            d[i] = -1;
        }
        d[0] = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 100; j >= 0; j--) {
                if (d[j] >= 0 && j + v[i] <= 100) {
                    if (d[j + v[i]] < c[i] + d[j]) {
                        d[j + v[i]] = c[i] + d[j];
                    }
                }
            }
        }

        int max = -10;
        for (int i = 0; i < 101; i++) {
            if (d[i] > max) {
                max = d[i];
            }
        }
        cout << max << "\n";
    }
    return 0;
}
