#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v;
  int a, b;
  cin >> a >> b;
  v.push_back(b);
  while (b > a) {
    if (b % 2 == 0) b /=2;
    else if (b % 10 == 1) b /= 10;
    else break;
    v.push_back(b);
  }
  sort(v.begin(), v.end());
  if (a == b) {
    cout << "YES" << '\n' << v.size() << '\n';
    for (int i = 0; i < (int) v.size(); i++) {
      cout << v[i] << ' ';
    }
  }
  else cout << "NO";
  return 0;
}
