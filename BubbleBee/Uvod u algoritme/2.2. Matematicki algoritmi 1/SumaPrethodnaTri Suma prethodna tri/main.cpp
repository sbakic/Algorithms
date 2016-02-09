#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int a1, a2, a3, n, a[100];
  scanf("%d %d %d %d", &a1, &a2, &a3, &n);
  for (int i = 0; i < (n - 3) % 62; i++) {
    int temp = (a1 + a2 + a3) % 10;
    a[i + 3] = temp;
    a1 = a2;
    a2 = a3;
    a3 = temp;
  }
  if (n == 1) printf("%d", a1);
  else if (n == 2) printf("%d", a2);
  else printf("%d", a3);
  return 0;
}
