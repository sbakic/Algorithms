#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[50], size = 0;
  set<int> s;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    s.insert(x);
  }
  for (set<int>::iterator i = s.begin(); i != s.end(); i++) {
    a[size++] = *i;
  }
  for (int i = 0; i < size - 2; i++) {
    if (abs(a[i] - a[i + 1]) <= 2 && abs(a[i] - a[i + 2]) <= 2 && abs(a[i + 1] - a[i + 2]) <= 2 && a[i] != a[i + 1] && a[i] != a[i + 2] && a[i + 1] != a[i + 2]) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
