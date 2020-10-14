#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[10000];
    int B[10000];
    int S[101];
    S[0] = 0; 
    for (int i = 0; i < n; i++) {
        cin >> A[i] >> B[i];
    }
    for (int i = 0; i < 100; i++) {
        S[i + 1] = -1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 100; j >= 0; j--) {
            if (S[j] >= 0) {
                if (S[j + A[i]] < B[i] + S[j]) {
                    S[j + A[i]] = B[i] + S[j];
                }
            }
        }
    }

    int max = 0; // ³Ì¤j­È
    for (int i = 0; i < 101; i++) {
        if (i == 0) {
            max = 0;
        } else if (S[i] > max) {
            max = S[i];
        }
    }
    cout << max;
}