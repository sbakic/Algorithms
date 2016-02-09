#include <cstdio>

using namespace std;

long long a[55];

void fibonacii(int n) {
  a[0] = 0;
  a[1] = 1;
  for (int i = 2; i < n; i++) {
    a[i] = a[i - 1] + a[i - 2];
  }
}

int main() {
  fibonacii(55);
  int t;
  scanf("%d", &t);
  while (t--) {
    long long n;
    scanf("%lld", &n);
    for (int i = 0; i < 55; i++) {
      if (n == a[i]) {
        printf("IsFibo\n");
        break;
      }
      else if (i == 54) printf("IsNotFibo\n");
    }
  }
  return 0;
}
