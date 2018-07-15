#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, d;
  set<int> s;
  cin >> n >> d;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  v.insert(v.begin(), v[0] - d);
  v.insert(v.end(), v[n] + d);
  for (int i = 1; i <= n; i++) {
    if ((v[i] - v[i - 1]) / 2>= d) {
      s.insert(v[i] - d);
    }
    if ((v[i + 1] - v[i]) / 2 >= d) {
      s.insert(v[i] + d);
    }
  }
  cout << s.size() + 2;
  return 0;
}
