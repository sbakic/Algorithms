#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  int n, a[100], minHeight = 1000, start, end;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  start = end = -1;
  for (int i = 0; i < n - 1; i++) {
    if (abs(a[i] - a[i + 1]) < minHeight) {
      minHeight = abs(a[i] - a[i + 1]);
      start = i + 1;
      end = i + 2;
    }
  }
  if (abs(a[0] - a[n - 1]) < minHeight) {
    cout << n << " 1";
  }
  else cout << start << " " << end;
  return 0;
}
