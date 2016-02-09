#include <stdio.h>

int occurs[1000001], L[1000001];

int main() {
  int n, x, maxNumber = 0, r = 1000001, l = -1;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    if (occurs[x] == 0) {
      L[x] = i;
      occurs[x] = 1;
    }
    else occurs[x]++;
    if (occurs[x] > maxNumber) {
      maxNumber = occurs[x];
      r = i - L[x];
      l = L[x] + 1;
    }
    else if (occurs[x] == maxNumber && i - L[x] < r) {
      r = i - L[x];
      l = L[x] + 1;
    }
  }
  printf("%d %d", l, l + r);
  return 0;
}
