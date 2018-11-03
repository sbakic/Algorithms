#include <stdio.h>

int main() {
  int n, m, days = 0;
  scanf("%d %d", &n, &m);
  for (int i = 1; n > 0;) {
    days++;
    if (days == i * m) {
      i++;
      continue;
    }
    else {
      n--;
    }
  }
  printf("%d", days);
  return 0;
}
