#include <iostream>
using namespace std;

int main () {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
        int temp[1001] = {1};
        int p;
        int sticklen[p];
        cin >> n;
		cin >> p;
        for (int i = 0; i < p; i++) {
            cin >> sticklen[i];
            temp[sticklen[i]] = 1;
        }
        for (int i = 0; i < 1000; i++) {
            for (int j = 0; j < p; j++)
            if (i + sticklen[j] < p && temp[i] == 1) {
                temp[i + sticklen[j]] = 1;
            }
        }

        
        if (temp[p] == 1) {
            cout << "yes" << "\n";
        } else {
            cout << "no" << "\n";
        }
		
	}
	
}
