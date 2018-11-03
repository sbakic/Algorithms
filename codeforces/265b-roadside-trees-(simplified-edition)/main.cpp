#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, a[100000], count = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      count += a[0] + 1;
      continue;
    }
    count += abs(a[i - 1] - a[i]) + 2;
  }
  cout << count;
  return 0;
}
