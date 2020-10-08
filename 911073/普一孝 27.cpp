#include <iostream>
using namespace std;

int main () {
	int t;
	cin >> t;
	while(t--){
		int x ,dp[1001] = {1}, n, p;
		cin >> n >> p;
		for(int i = 0; i < p; i++){
			cin >> x;
			for(int j = 1000; j >= x; j--){
				dp[j] += dp[j - x];
			}
		}
		cout << (dp[n] ? "YES\n" : "NO\n");
	}
	
}