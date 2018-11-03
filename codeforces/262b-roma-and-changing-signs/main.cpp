#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, a[100000], sum = 0, neg = 0, curr = 10001;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    curr = min(curr, abs(a[i]));
    if (a[i] < 0) neg++;
    sum += a[i];
  }
  for (int i = 0; a[i] < 0 && k > 0; i++, k--) {
    sum += 2 * -a[i];
  }
  if (k % 2 == 1) sum -= 2 * curr;
  cout << sum;
  return 0;
}
