#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
  int n, m, a, b, sum = 0, sum1 = 0;
  scanf("%d %d %d %d", &n, &m, &a, &b);
  if (m > n) {
    printf("%d", min(n * a, b));
    return 0;
  }
  while (n > 0) {
    if (n - m <= 0 && a < b) {
      n--;
      sum += a;
    }
    else {
      if (m * a < b){
        sum += a;
        n--;
      }
      else {
        sum += b;
        n -= m;
        }
    }
  }
  printf("%d", sum);
  return 0;
}
