#include <stdio.h>

int main() {
  int n, s, t, a[100000], count = 0;
  scanf("%d %d %d", &n, &s, &t);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  while (count <= n) {
    if (s == t) break;
    s = a[s - 1];
    count++;
  }
  printf("%d", count > n ? -1 : count);
  return 0;
}
