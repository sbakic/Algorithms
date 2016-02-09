#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  double area = 0;
  int n, a[100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n, greater<int>());
  bool swap = true;
  for (int i = 0, j = 1; i < n; i++) {
    area += a[i] * a[i] * 3.1415926535 * j;
    j *= -1;
  }
  printf("%.10lf", area);
  return 0;
}
