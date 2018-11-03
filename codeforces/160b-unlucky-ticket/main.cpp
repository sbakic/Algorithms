#include <bits/stdc++.h>

using namespace std;

bool check(int a[], int b[], int n, bool more) {
  for (int i = 0; i < n; i++) {
    if (more) {
      if (a[i] < b[i]) return false;
    }
    else {
      if (a[i] > b[i]) return false;
    }
    if (a[i] == b[i]) return false;
  }
  return true;
}

int main() {
  string s;
  int n, a[100], b[100];
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    a[i] = s[i] - '0';
  }
  for (int i = n; i < 2 * n ; i++) {
    b[i - n] = s[i] - '0';
  }
  sort(a, a + n);
  sort(b, b + n);
  if (check(a, b, n, true) || check(a, b, n, false)) cout << "YES";
  else cout << "NO";
  return 0;
}
