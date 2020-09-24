#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, a[26] = {};
    cin >> n;
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      for (char c : s) {
        a[c - 'a']++;
      }
    }
    bool same = true;
    for (int i : a) {
      if (i % n != 0) {
        same = false;
        break;
      }
    }
    cout << (same ? "YES" : "NO") << endl;
  }
  return 0;
}
