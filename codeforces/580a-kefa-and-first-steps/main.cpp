#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100000], size = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n - 1; i++) {
    int length = 1;
    while (a[i] <= a[i + 1] && i < n - 1) {
      length++;
      i++;
    }
    size = max(size, length);
  }
  printf("%d", size == 0 ? 1 : size);
  return 0;
}
