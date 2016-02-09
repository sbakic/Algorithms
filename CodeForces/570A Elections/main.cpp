#include <stdio.h>

int main() {
  int n, m, a[100] = {};
  scanf("%d %d", &n, &m);
  while (m--) {
    int max = -1, index = -1;
    for (int i = 0; i < n; i++) {
      int votes;
      scanf("%d", &votes);
      if (votes > max) {
        max = votes;
        index = i;
      }
    }
    a[index]++;
  }
  int max = - 1, index = -1;
  for (int i = 0; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
      index = i;
    }
  }
  printf("%d", index + 1);
  return 0;
}
