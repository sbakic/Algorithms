#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int n, a[2000];
  cin >> n >> s;
  for (int i = 0, j = (n % 2 == 1 ? n / 2 : n / 2 - 1), k = 1, l = (n % 2 == 1 ? -1 : 1); i < n; i++, k++) {
    a[j] = s[i];
    j += l * k;
    l *= -1;
  }
  if (n % 2 == 0) a[n - 1] = s[n - 1];
  for (int i = 0; i < n; i++) {
    cout << (char)a[i];
  }
  return 0;
}
