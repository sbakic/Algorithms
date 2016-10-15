#include <bits/stdc++.h>

using namespace std;

int main() {
  bool check = false;
  int n, a[100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i < n; i++) {
    if (a[i] > a[i - 1]) check = true;
    else check = false;
  }
  if (n > 1) {
    if (check) {
      if (a[n - 1] == 15) cout << "DOWN";
      else cout << "UP";
    }
    else {
      if (a[n - 1] == 0) cout << "UP";
      else cout << "DOWN";
    }
  }
  else {
    if (a[0] == 0) cout << "UP";
    else if (a[0] == 15) cout << "DOWN";
    else cout << "-1";
  }
  return 0;
}
