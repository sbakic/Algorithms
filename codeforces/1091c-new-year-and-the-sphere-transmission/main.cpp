#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  set<long long> s;
  vector<int> v;
  int n;
  cin >> n;
  int i = 1;
  while (i * i < n) {
    if (n % i == 0) {
      v.push_back(i);
      v.push_back(n / i);
    }
    i++;
  }
  if (i * i == n) {
    v.push_back(i);
  }
  for (int i = 0; i < (int) v.size(); i++) {
    long long a = n / v[i];
    s.insert(a + v[i] * ((a - 1) * a / 2));
  }
  for (set<long long>::iterator i = s.begin(); i != s.end(); i++) {
    cout << *i << ' ';
  }
  return 0;
}
