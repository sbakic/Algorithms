#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<string> v;
  int n;
  cin >> n;
  while (n--) {
    string name, email;
    cin >> name >> email;
    regex e(".+@gmail\\.com$");
    if (regex_match(email, e)) {
      v.push_back(name);
    }
  }
  sort(v.begin(), v.end());
  for (auto i : v) {
    cout << i << '\n';
  }
  return 0;
}
