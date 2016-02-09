#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, zero = 0, one = 0;
  char c[200001];
  scanf("%d %s", &n, c);
  for (int i = 0; i < n; i++) {
    if (c[i] == '0') zero++;
    else one++;
  }
  printf("%d", abs(one - zero));
  return 0;
}
