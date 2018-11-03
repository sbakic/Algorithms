#include <bits/stdc++.h>

using namespace std;

int main() {
  char s[4][4];
  for (int i = 0; i < 4; i++) {
    scanf("%s", s[i]);
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int black = 0, white = 0;
      if (s[i][j] == '#') black++;
      if (s[i + 1][j] == '#') black++;
      if (s[i][j + 1] == '#') black++;
      if (s[i + 1][j + 1] == '#') black++;
      if (s[i][j] == '.') white++;
      if (s[i + 1][j] == '.') white++;
      if (s[i][j + 1] == '.') white++;
      if (s[i + 1][j + 1] == '.') white++;
      if (black == 3 || black == 4 || white == 3 || white == 4) {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";
  return 0;
}
