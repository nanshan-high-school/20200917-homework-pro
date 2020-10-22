#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cin >> b[i];
    }

    int v[101];
    for (int i = 0; i < 101; i++) {
        v[i] = -1;
    }
    v[0] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 100; j >= 0; j--) {
            if (v[j] >= 0 && j + a[i] <= 100) {
                if (v[j + a[i]] < b[i] + v[j]) {
                    v[j + a[i]] = b[i] + v[j];
                }
            }
        }            
    }

    int max = -10;
    for (int i = 0; i < 101; i++) {
       if (v[i] > max) {
           max = v[i];
       }
    }
    cout << max;
    return 0;
}
