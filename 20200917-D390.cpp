#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int time = 0; time < n; time++) {
        int m;
        cin >> m;

        int coin[m];
        for (int i = 0; i < m; i++) {
            cin >> coin[i];
        }

        int lab[(int)pow(2, m)];
        for (int i = 0; i < pow(2, m); i++) {
            lab[i] = 0;
        }

        bool half;
        for (int i = 0; i < m; i++) {
            half = false;
            for (int j = 0; j < pow(2, m); j++) {
                if (half) {
                    lab[j] -= coin[i];
                } else {
                    lab[j] += coin[i];
                }
                if ((j + 1) % (int)pow(2, m - i - 1) == 0) {
                    half = !half;
                }
            }
        }

        int min = 10000;
        for (int i = 0; i < pow(2, m); i++) {
            if (lab[i] < 0) {
                lab[i] *= -1;
            }
            if (lab[i] < min) {
                min = lab[i];
            }
        }
        cout << min << "\n";
    }
}
