#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<int, int> a[1000];
  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i].first;
  }
  for (int i = 0; i < n; i++) {
    int count = 1;
    for (int j = i - 1; j >= 0; j--) {
      if (a[j].first <= a[j + 1].first) count++;
      else break;
    }
    for (int j = i + 1; j < n; j++) {
      if (a[j].first <= a[j - 1].first) count++;
      else break;
    }
    a[i].second = count;
    ans = max(ans, count);
  }
  for (int i = 0; i < n; i++) {
    if (a[i].second == ans) {
      cout << ans;
      break;
    }
  }
  return 0;
}
