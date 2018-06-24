#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, int> m;
  int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  string s, t;
  cin >> s >> t;
  m["monday"] = 0;
  m["tuesday"] = 1;
  m["wednesday"] = 2;
  m["thursday"] = 3;
  m["friday"] = 4;
  m["saturday"] = 5;
  m["sunday"] = 6;
  for (int i = 0; i < 11; i++) {
    if ((m[s] + a[i]) % 7 == m[t]) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
