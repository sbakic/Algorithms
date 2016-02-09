#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, a[100000], count = 0, curr = 2;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  if (n == 1) count = 1;
  if (n == 2) count = 2;
  for (int i = 0; i <= n && n > 2; i++) {
    if (i != n && a[i - 1] + a[i - 2] == a[i]) curr++;
    else {
      count = max(count, curr);
      curr = 2;
    }
  }
  bool found = false;
  sort(a, a + n);
  for (int i = 0; i < n && n > 1; i++) {
    if (a[i] == a[i + 1]) {
      found = true;
      break;
    }
  }
  printf("%d", !found && count == 2 && n > 2 ? 1 : count);
  return 0;
}
