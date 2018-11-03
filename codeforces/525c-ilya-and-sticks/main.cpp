#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, a[1000001], stick, maxS = 0, minS = 1000001;
  long long area = 0;
  for (int i = 0; i < 1000001; i++) a[i] = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> stick;
    a[stick]++;
    maxS = max(stick, maxS);
    minS = min(stick, minS);
  }
  for (int i = maxS; i >= minS; i--) {
    if (a[i] % 2 == 1 && a[i - 1] > 0) {
      a[i]--;
      a[i - 1]++;
    }
    else if (a[i] % 2 == 1 && a[i - 1] == 0)
      a[i]--;
  }
  int index = 0;
  for (int i = maxS; i >= minS; i--) {
    if (a[i] > 0) {
      if (index != 0 && a[i] >= 2) {
        area += (long long) index * i;
        a[i] -= 2;
      }
      int proper = a[i] / 4;
      area += (long long) proper * i * i;
      int rest = a[i] - 4 * proper;
      if (rest == 2) {
        index = i;
      }
      else index = 0;
    }
  }
  cout << area;
  return 0;
}
