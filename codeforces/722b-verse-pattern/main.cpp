#include <bits/stdc++.h>

using namespace std;

int main() {
  string s[100];
  int n, a[100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin.ignore();
  for (int i = 0; i < n; i++) {
    getline(cin, s[i]);
  }
  for (int i = 0; i < n; i++) {
    int curr = 0;
    for (int j = 0; j < (int) s[i].size(); j++) {
      if (s[i][j] == 'a' || s[i][j] == 'e' || s[i][j] == 'i' || s[i][j] == 'o' || s[i][j] == 'u' || s[i][j] == 'y') curr++;
    }
    if (a[i] != curr) {
      cout << "NO";
      return 0;

    }
  }
  cout << "YES";
  return 0;
}
