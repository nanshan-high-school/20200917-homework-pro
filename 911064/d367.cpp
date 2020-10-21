#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int n;
    cin >> n;

    int a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int dp[101];
    dp[0] = 0;
    for (int i = 1; i < 101; i++) {
        dp[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 100; j >= 0; j--) {
            if (dp[j] >= 0 && j + a[i] <= 100) {
                if (dp[j + a[i]] < b[i] + dp[j]) {
                        dp[j + a[i]] = b[i] + dp[j];
                    }
            }
        }
    }
    int max = -10;
    for (int i = 0; i < 101; i++) {
       if (dp[i] > max) {
           max = dp[i];
       }
    }
    cout << max;
}
