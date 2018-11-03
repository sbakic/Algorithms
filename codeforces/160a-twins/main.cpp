#include <stdio.h>
#include <algorithm>

using namespace std;

int check(int a[], int n, int index) {
  int sum = 0;
  for (int i = index - 1; i >= 0; i--) sum += a[i];
  return sum;
}

int main() {
  int n, a[100], sum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  sort(a, a + n);
  for (int i = n - 1; i >= 0; i--) {
    sum += a[i];
    if (sum > check(a, n, i)) {
      printf("%d", n - i);
      break;
    }
  }
  return 0;
}
