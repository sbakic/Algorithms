#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100000], b[] = {(int) 1e9 + 1, -1, 1};
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] < b[0]) {
      b[0] = a[i];
      b[1] = i + 1;
      b[2] = 1;
    }
    else if (a[i] == b[0]) b[2]++;
  }
  if (b[2] > 1) cout << "Still Rozdil";
  else cout << b[1];
  return 0;
}
