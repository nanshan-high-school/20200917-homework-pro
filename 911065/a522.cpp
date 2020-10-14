#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t,n,p;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cin >> p;
        int tool[p];
        for (int j = 0; j < p; j++) {
            cin >> tool[j];
        }

        vector<int> A;
        A.push_back(1);
        for (int j = 0; j < n + 1; j++) {
            A.push_back(0);
        }
        
        for (int j = 0; j < p; j++) {
            for (int k = n; k >= 0; k--) {
                if (A[k] == 1) {
                    A[k + tool[j]] = 1;
                }
            }
            cout << "\n";
        }
        for (int j = 0; j < A.size(); j++) {
            cout << A[j];
        }
        if (A[n] == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}