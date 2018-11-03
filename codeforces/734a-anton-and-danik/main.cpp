#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int n, a = 0, d = 0;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A') a++;
    if (s[i] == 'D') d++;
  }
  if (a > d) cout << "Anton";
  else if (d > a) cout << "Danik";
  else cout << "Friendship";
  return 0;
}
