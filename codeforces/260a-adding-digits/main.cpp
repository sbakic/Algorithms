#include <bits/stdc++.h>

using namespace std;

string make(int a) {
  string s = "", t = "";
  while (a) {
    s += (a % 10) + '0';
    a /= 10;
  }
  for (int i = s.size() - 1; i >= 0; i--) {
    t += s[i];
  }
  return t;
}

int main() {
  int a, b, n;
  cin >> a >> b >> n;
  string s = make(a), t = make(a);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 10; j++) {
      int curr = (a * 10 + j) % b;
      if (curr == 0) {
        a = curr;
        s += j + '0';
        break;
      }
    }
  }
  cout << (s == t ? "-1" : s);
  return 0;
}
