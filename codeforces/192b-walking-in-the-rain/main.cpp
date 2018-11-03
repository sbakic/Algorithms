#include <iostream>

using namespace std;

bool check(int a[], int i, int n, int count) {
  if (a[0] == 0 || a[n - 1] == 0) return false;
  if (i == n - 1) return true;
  if (i < n && a[i + 1] != 0) return check(a, i + 1, n, count);
  if (i < n - 1 && a[i + 2] != 0) return check(a, i + 2, n, count);
  return false;
}

int main() {
  int n, a[1000], count = 1;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  while (check(a, 0, n, count)) {
    for (int i = 0 ; i < n; i++) {
      if (a[i] == count) a[i] = 0;
    }
    count++;
  }
  printf("%d", count - 1);
  return 0;
}
