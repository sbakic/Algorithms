#include <bits/stdc++.h>

using namespace std;

string s;
int m, a[1000];

bool solve(int i, int k) {
  if (i < m) {
    for (int j = k + 1; j <= 10; j++) {
      a[i] = j;
      if (s[j - 1] == '1' && j != a[i - 1] && solve(i + 1, j - k)) return 1;
    }
  }
  return i == m;
}
int main() {
  cin >> s >> m;
  bool check = solve(0, 0);
  cout << (check ? "YES" : "NO") << '\n';
  if (check) {
    for (int i = 0; i < m; i++) {
      cout << a[i] << " ";
    }
  }
  return 0;
}
