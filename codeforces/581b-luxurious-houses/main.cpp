#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100000], b[100000], maxFloors = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = n - 1; i >= 0; i--) {
    if (a[i] > maxFloors) b[i] = 0;
    else b[i] = maxFloors - a[i] + 1;
    maxFloors = max(maxFloors, a[i]);
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", b[i]);
  }
  return 0;
}
