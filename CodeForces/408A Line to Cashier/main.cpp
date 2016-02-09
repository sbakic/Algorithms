#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
  int n, a[100], b[100], minTime = 1000000000;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    b[i] = 0;
    int m, k = a[i];
    while (k--) {
      scanf("%d", &m);
      b[i] += m * 5;
    }
    b[i] += a[i] * 15;
  }
  for (int i = 0; i < n; i++) {
    minTime = min(minTime, b[i]);
  }
  printf("%d", minTime);
  return 0;
}
