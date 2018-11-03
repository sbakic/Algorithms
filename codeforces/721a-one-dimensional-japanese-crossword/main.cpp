#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v;
  string s;
  int n, curr = 1;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'B' && s[i] == s[i + 1]) curr++;
    else if (s[i] == 'B' && s[i] != s[i + 1]) {
      v.push_back(curr);
      curr = 1;
    }
  }
  cout << v.size() << '\n';
  for (int i = 0; i < (int) v.size(); i++) {
    cout << v[i] << ' ';
  }
  return 0;
}
