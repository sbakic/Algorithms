#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int n, a[4] = {};
  cin >> n >> s;
  if (n % 4 == 0) {
    int curr = n / 4;
    for (int i = 0; i < n; i++) {
      if (s[i] == '?') continue;
      if (s[i] == 'A') a[0]++;
      if (s[i] == 'C') a[1]++;
      if (s[i] == 'G') a[2]++;
      if (s[i] == 'T') a[3]++;
    }
    for (int i = 0; i < 4; i++) {
      if (a[i] > curr) {
        cout << "===";
        return 0;
      }
    }
    for (int i = 0; i < n; i++) {
      if (s[i] == '?') {
        for (int i = 0; i < 4; i++) {
          if (a[i] < curr) {
            if (i == 0) cout << "A";
            if (i == 1) cout << "C";
            if (i == 2) cout << "G";
            if (i == 3) cout << "T";
            a[i]++;
            break;
          }
        }
      }
      else cout << s[i];
    }
  }
  else cout << "===";
  return 0;
}
