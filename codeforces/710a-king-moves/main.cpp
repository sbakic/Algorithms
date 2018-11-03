#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int x = s[0] - 'a', y = s[1] - '1';
  if ((x == 0 && y == 0) || (x == 0 && y == 7) || (x == 7 && y == 0) || (x == 7 && y == 7)) cout << "3";
  else if (x == 0 || x == 7 || y == 0 || y == 7) cout << "5";
  else cout << "8";
  return 0;
}
