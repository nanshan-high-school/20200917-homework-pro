#include <iostream>

int main() {
  int n;
  scanf("%d",&n);

  int arr[101];
  arr[0] = 1;
    for (int j = 1; j < 101; j++){
      arr[j] = 0;
    }

  for (int i = 0; i < n; i++) {
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);

    for (int j = 100; j >= 0; j--) {
      if (arr[j] > 0 && arr[j + a] < arr[j] + b) {
        arr[j + a] = arr[j] + b;
      }
    }
  }

  int max = 0;
  for (int i = 0; i < 101; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf("%d",max - 1);
}
