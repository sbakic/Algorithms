#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int a, b, n, first[1000000], second[1000000] = {}, p = 10;
  cin >> s >> a >> b;
  n = s.size();
  first[0] = (s[0] - '0') % a;
  second[n - 1] = (s[n - 1] - '0') % b;
  for (int i = 1; i < n - 1; i++) {
    first[i] = (first[i - 1] * 10 + s[i] - '0') % a;
  }
  for (int i = n - 2; i > 0; i--) {
    second[i] = ((s[i] - '0') * p + second[i + 1]) % b;
    p = p * 10 % b;
  }
  for (int i = 0; i < n - 1; i++) {
    if (first[i] == 0 && second[i + 1] == 0 && s[i + 1] != '0') {
      cout << "YES\n";
      cout << s.substr(0, i + 1) << '\n';
      cout << s.substr(i + 1, n);
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
