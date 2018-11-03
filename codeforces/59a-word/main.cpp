#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), lower = 0, up = 0;
  for (int i = 0; i < n; i++) {
    char curr = s[i];
    if (curr == tolower(curr)) lower++;
    else up++;
  }
  if (up > lower) transform(s.begin(), s.end(), s.begin(), ::toupper);
  else transform(s.begin(), s.end(), s.begin(), ::tolower);
  cout << s;
  return 0;
}
