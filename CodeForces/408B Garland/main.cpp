#include <iostream>

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int n = s.size(), m = t.size(), count = 0, a[26] = {}, b[26] = {};
  for (int i = 0; i < n; i++) {
    a[s[i] - 'a']++;
  }
  for (int i = 0; i < m; i++) {
    b[t[i] - 'a']++;
  }
  for (int i = 0; i < 26; i++) {
    if (b[i] > 0) {
      if (a[i] > 0) {
        count += (a[i] >= b[i] ? b[i] : a[i]);
      }
      else {
        count = -1;
        break;
      }
    }
  }
  cout << count;
  return 0;
}
