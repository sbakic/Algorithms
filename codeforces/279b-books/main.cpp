#include <iostream>

using namespace std;

int main() {
  int n, t, a[100000], count = 0, sum = 0;
  cin >> n >> t;
  for (int i = 0, j = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    while (sum > t) {
      sum -= a[j++];
    }
    count = max(count, i - j + 1);
  }
  cout << count;
  return 0;
}
