#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<int, int> a[100];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i + 1;
  }
  sort(a, a + n);
  for (int i = 0; i < n / 2; i++) {
    cout << a[i].second << " " << a[n - 1 - i].second << '\n';
  }
  return 0;
}
