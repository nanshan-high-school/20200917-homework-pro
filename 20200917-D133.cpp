#include <iostream>
using namespace std;

int main() {
    int m[5] = {1, 5, 10, 25, 50};
    int n;
    while (cin >> n) {
        long long e[n + 1];
        for (int i = 1; i <= n; i++) {
            e[i] = 0;
        }
        e[0] = 1;

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < n + 1; j++) {
                if (j + m[i] <= n + 1) {
                    e[j + m[i]] += e[j];
                }
            }
        }

        if (e[n] > 1) {
            cout << "There are " << e[n] << " ways to produce "<< n << " cents change.\n";
        } else {
            cout << "There is only 1 way to produce " << n << " cents change.\n";
        }
    }
    return 0;
}
