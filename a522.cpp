#include <iostream>

int main() {
  int t;
  scanf("%d",&t);

  for (int i = 0; i < t; i++) {
    int n;
    scanf("%d",&n);
    int dp[n + 1];
    dp[0] = 1;
    for (int j = 1; j < n + 1; j++) {
      dp[j] = -1;
    }

    int p;
    scanf("%d",&p);
    int s[p];
    for (int j = 0; j < p; j++) {
      scanf("%d",&s[j]);
    }

    for (int j = 0; j < p; j++) {
      for (int k = n; k >= 0; k--) {
        //printf("%d\n",dp[k]);
        if (dp[k] >= 0) {
          //printf("%d,%d\n",s[j],dp[k+s[j]]);
          if (s[j] > dp[k+s[j]]) {
            dp[k+s[j]] = 1;
          }
        }
      }
    }

    if (dp[n] == -1) {
      printf("NO\n");
    } else {
      printf("YES\n");
    }
  }
}
