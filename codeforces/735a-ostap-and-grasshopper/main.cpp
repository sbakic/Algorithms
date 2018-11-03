#include <bits/stdc++.h>

using namespace std;

int main() {
  bool g = false, t = false;
  string s;
  int n, k;
  vector<int> v;
  cin >> n >> k >> s;
  for (int i = 0, j = 1; i < n; i += j) {
    if (s[i] == 'G') g = true, j = k;
    if (s[i] == 'T') t = true, j = k;
    if ((g || t) && s[i] == '#') break;
    if (g && t) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
