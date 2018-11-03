#include <bits/stdc++.h>

using namespace std;

int main() {
  char s[1001][6];
  bool found = false;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    scanf("%s", s[i]);
  }
  for (int i = 0; i < n; i++) {
    if (s[i][0] == 'O' && s[i][1] == 'O') {
      s[i][0] = s[i][1] = '+';
      found = true;
      break;
    }
    if (s[i][3] == 'O' && s[i][4] == 'O') {
      s[i][3] = s[i][4] = '+';
      found = true;
      break;
    }
  }
  if (!found) cout << "NO";
  else {
    cout << "YES" << '\n';
    for (int i = 0; i < n; i++) {
      cout << s[i] << '\n';
    }
  }
  return 0;
}
