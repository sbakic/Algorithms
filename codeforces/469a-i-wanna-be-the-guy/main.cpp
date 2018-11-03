#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
  int n, p, q, a[202], levels[101], level = 0;
  scanf("%d %d", &n, &p);
  int j;
  for (j = 0; j < p; j++) {
    scanf("%d", &a[j]);
    levels[j] = j + 1;
  }
  scanf("%d", &q);
  for (j = p; j < p + q; j++) {
    scanf("%d", &a[j]);
    levels[j] = j + 1;
  }
  sort(a, a + q + p);
  for (int i = 0; i < q + p; i++) {
    if (i == 0) {
      if (a[i] == 1) {
        level = a[i];
        continue;
      }
      else {
        printf("Oh, my keyboard!");
        return 0;
      }
    }
    if (a[i] == a[i - 1] + 1) {
      level = a[i];
    }
    if (a[i] >= a[i - 1] + 2) {
      printf("Oh, my keyboard!");
      return 0;
    }
  }
  if (level >= n) {
    printf("I become the guy.");
  }
  else {
    printf("Oh, my keyboard!");
  }
  return 0;
}
