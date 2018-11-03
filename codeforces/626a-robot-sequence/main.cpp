#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, count = 0;
  cin >> n;
  string s;
  cin >> s;
  k = n;
  while (k > 1) {
    for (int i = 0; i <= n - k; i++) {
      int u = 0, d = 0, r = 0, l = 0;
      for (int j = i; j < i + k; j++) {
        switch (s[j]) {
          case 'U': u++; break;
          case 'D': d++; break;
          case 'R': r++; break;
          case 'L': l++; break;
        }
      }
      if (u == d && r == l) count++;
    }
    k--;
  }
  cout << count;
  return 0;
}
