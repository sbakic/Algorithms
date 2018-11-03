#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), a[26] = {}, odd = 0, count = 0;
  for (int i = 0; i < n; i++) {
    a[s[i] - 'a']++;
  }
  for (int i = 0; i < 26; i++) {
    if (a[i] % 2 == 1 && a[i] != 0) odd++;
  }
  count += (odd == 0 ? odd : odd - 1);
  if (count % 2 == 0) cout << "First";
  else cout << "Second";
  return 0;
}
