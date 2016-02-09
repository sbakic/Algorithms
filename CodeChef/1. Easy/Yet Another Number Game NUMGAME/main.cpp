#include <stdio.h>

int main() {
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    n % 2 == 0? printf("ALICE\n"): printf("BOB\n");
  }
  return 0;
}
