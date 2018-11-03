#include <bits/stdc++.h>

using namespace std;

bool found(char c[], char C) {
  for (int i = 0; i < 4; i++) {
    if (c[i] == C) return true;
  }
  return false;
}

int main() {
  char c[] = "!!!!";
  string s, t = "RBYG";
  cin >> s;
  int n = s.size(), r = 0, b = 0, y = 0, g = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] != '!') c[i % 4] = s[i];
  }
  while (found(c, '!')) {
    for (int i = 0; i < 4; i++) {
      if (!found(c, t[i])) {
        for (int j = 0; j < 4; j++) {
          if (c[j] == '!') {
            c[j] = t[i];
            break;
          }
        }
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (s[i] == '!') {
      if (c[i % 4] == 'R') r++;
      if (c[i % 4] == 'B') b++;
      if (c[i % 4] == 'Y') y++;
      if (c[i % 4] == 'G') g++;
    }
  }
  cout << r << " " << b << " " << y << " " << g;
  return 0;
}
