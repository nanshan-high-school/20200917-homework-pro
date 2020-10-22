#include <iostream>
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

        long long total = 0;
        for (int i = 0; i < m; i++) {
            total += coin[i];
        }

        int tHalf = total / 2;
        int t[tHalf + 1];
        for (int i = 0; i <= tHalf; i++) {
            t[i] = 0;
        }
        t[0] = 1;

        for (int i = 0; i < m; i++) {
            for (int j = tHalf; j >= 0; j--) {
                if (t[j] == 1) {
                    if (j + coin[i] <= tHalf) {
                        t[j + coin[i]] = 1;
                    }                    
                }
            }
        }

        int max = -1;
        for (int i = 0; i <= tHalf; i++) {
            if (t[i] == 1) {
                max = i;
            }
        }
        cout << total - max * 2 << "\n";
    }
    return 0;
}
