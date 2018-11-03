#include <bits/stdc++.h>

using namespace std;

char a[] = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y', 'b', 'd', 'o', 'p', 'q', 'v', 'w', 'x'};
char b[] = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y', 'd', 'b', 'o', 'q', 'p', 'v', 'w', 'x'};

bool check(char c1, char c2) {
  for (int i = 0; i < 20; i++) {
    if (c1 == a[i]) {
      if (c2 == b[i]) return true;
      else return false;
    }
  }
  return false;
}

int main() {
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n / 2; i++) {
    if (!check(s[i], s[n - 1 - i])) {
      cout << "NIE";
      return 0;
    }
  }
  cout << (n % 2 == 1 ? check(s[n / 2], s[n / 2]) ? "TAK" : "NIE" : "TAK ");
  return 0;
}
