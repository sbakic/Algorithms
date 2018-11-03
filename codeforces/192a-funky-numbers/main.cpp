#include <stdio.h>
#include <math.h>

int main() {
  int n;
  scanf("%d", &n);
  int i = 1;
  long long j = (sqrt(8LL * n + 1) - 1) / 2;
  while (i <= j) {
    int a = i * (i + 1) / 2 + j * (j + 1) / 2;
    if (a > n) j--;
    else if (a < n) i++;
    else {
      printf("YES");
      return 0;
    }
  }
  printf("NO");
  return 0;
}
