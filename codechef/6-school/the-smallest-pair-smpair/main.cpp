#include <stdio.h>

int main() {
  int t, n, a[100000];
  scanf("%d", &t);
  while (t--) {
    int minOne = 1000001, minTwo = 1000001;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
      if (a[i] < minOne) {
        minTwo = minOne;
        minOne = a[i];
      }
      else if (a[i] < minTwo) {
        minTwo = a[i];
      }
    }
    printf("%d\n", minOne + minTwo);
  }
  return 0;
}
