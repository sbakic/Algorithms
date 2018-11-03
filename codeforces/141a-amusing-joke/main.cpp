#include <bits/stdc++.h>

using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b >> c;
  int n = a.size(), m = b.size(), k = c.size(), letters[26] = {};
  for (int i = 0; i < n; i++) {
    letters[a[i] - 'A']++;
  }
  for (int i = 0; i < m; i++) {
    letters[b[i] - 'A']++;
  }
  for (int i = 0; i < k; i++) {
    letters[c[i] - 'A']--;
  }
  for (int i = 0; i < 26; i++) {
    if (letters[i] != 0) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}
