#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, a, b, curr;
  cin >> s;
  int k, n = s.size();
  for (int i = 0; i < n; ++i) {
    if (s[i] == ',' ||  s[i] == ';') s[i] = ' ';
  }
  k = 0;
  s += " ";
  curr = a = b = "";
  for (int i = 0; i < n + 1; ++i) {
    if (s[i] == ' ') {
      if (k == 1 || (curr[0] == '0' && curr.size() > 1) || curr.size() == 0) b += "," + curr;
      else a += "," + curr;
      k = 0;
      curr = "";
      continue;
    }
    if (s[i] < '0' || s[i] > '9') k = 1;
    curr += s[i];
  }
  if (a != "") {
    a.erase(0, 1);
    cout << '"' << a << '"' << "\n";
  } else cout << "-\n";
  if (b != "") {
    b.erase(0, 1);
    cout << '"' << b << '"' << "\n";
  } else cout << "-\n";
  return 0;
}
