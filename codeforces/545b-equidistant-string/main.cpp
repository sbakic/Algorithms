#include <iostream>

using namespace std;

int main() {
  string s, t, p = "";
  cin >> s >> t;
  int n = s.size(), difference = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] != t[i]) difference++;
  }
  if (difference % 2 == 1) {
    cout << "impossible";
    return 0;
  }
  int which = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] != t[i] && which == 0) {
      if (s[i] == '1') p += "0";
      else p += "1";
      which = 1;
    }
    else if (s[i] != t[i] && which == 1) {
      if (t[i] == '1') p += "0";
      else p += "1";
      which = 0;
      }
    else if (s[i] == t[i]) p += s[i];
  }
  cout << p;
  return 0;
}
