#include <stdio.h>

int main() {
  int n, m, sum = 0;
  scanf("%d %d", &n, &m);
  char c[300001];
  scanf("%s", c);
  for (int i = 0; i < n; i++) {
    if (c[i] == '.' && c[i + 1] == '.') sum++;
  }
  while (m--) {
    int i;
    char sign;
    scanf("%d %c", &i, &sign);
    i--;
    if (c[i] != '.' && sign == '.') {
      if (i > 0 && c[i - 1] == '.') sum++;
      if (i < n - 1 && c[i + 1] == '.') sum++;
    }
    if (c[i] == '.' && sign != '.') {
      if (i > 0 && c[i - 1] == '.') sum--;
      if (i < n - 1 && c[i + 1] == '.') sum--;
    }
    c[i] = sign;
    printf("%d\n", sum);
  }
  return 0;
}
