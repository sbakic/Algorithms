#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int n, k, a[26] = {}, go;
  cin >> k >> s;
  n = s.size();
  for (int i = 0; i < n; i++) {
    a[s[i] - 'a']++;
  }
  for (int i = 0; i < 26; i++) {
    if (a[i] % k != 0) {
      cout << "-1";
      return 0;
    }
  }
  go = k;
  while (go--) {
    for (int i = 0; i < 26; i++) {
      int curr =  a[i] / k;
      while (curr--) {
        cout << char(i + 'a');
      }
    }
  }
  return 0;
}
