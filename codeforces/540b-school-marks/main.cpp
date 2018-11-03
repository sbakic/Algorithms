#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, p, x, y, a[1000], count = 0, sum = 0;
  cin >> n >> k >> p >> x >> y;
  for (int i = 0; i < k; i++) {
    cin >> a[i];
    if (a[i] < y) count++;
    sum += a[i];
  }
  int mid = (n - 1) / 2;
  if (count > mid) {
    cout << "-1";
    return 0;
  }
  int curr = (n + 1) / 2 - 1 - count;
  if (curr > n - k) curr = n - k;
  sum += curr + y * (n - k - curr);
  if (sum > x) {
    cout << "-1";
    return 0;
  }
  for (int i = 0; i < curr; i++) {
    cout << "1 ";
  }
  for (int i = curr; i < n - k; i++) {
    cout << y << " ";
  }
  return 0;
}
