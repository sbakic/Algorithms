#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100000], ans = 0, curr = 1;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == i) ans++;
    else if (a[a[i]] == i) curr = 2;
  }
  cout << min(n, ans + curr);
  return 0;
}
