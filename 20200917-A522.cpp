#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n, p;
    cin >> t;
    for (; t > 0; t--) {
        cin >> n;
        cin >> p;
        int l[p];
        for (int i = 0; i < p; i++) {
            cin >> l[i];
        }

        vector<int> lab;
        lab.push_back(1);
        for (int i = 1; i < n + 1; i++) {
            lab.push_back(0);
        }

        for (int i = 0; i < p; i++) {
            for (int j = n; j >= 0; j--) {
                if (j + l[i] < lab.size() && lab[j] == 1) {
                    lab[j + l[i]] = 1;                        
                }                      
            }            
        }

        if (lab[n] == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
