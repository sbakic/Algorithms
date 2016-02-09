#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
  long long x;
  int a[20], size = 0;
  scanf("%I64d", &x);
  while (x > 0) {
    a[size++] = x % 10;
    x /= 10;
  }
  int first = a[size - 1];
  for (int i = 0; i < size; i++) {
    a[i] = min(a[i], 9 - a[i]);
  }
  if (first == 9) a[size - 1] = 9;
  bool check = false;
  for (int i = size - 1; i >= 0; i--) {
      if(!check) {
          while (a[i] == 0) {
            i--;
          }
          check = true;
      }
      printf("%d", a[i]);
  }
  return 0;
}
