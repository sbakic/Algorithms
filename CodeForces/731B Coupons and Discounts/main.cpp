#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[200001] = {};
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 1) {
      if (a[i + 1] == 0) {
        cout << "NO";
        return 0;
      }
      else {
        if (a[i + 1] % 2 == 1) i++;
        else a[i + 1]--;
      }
    }
  }
  cout << "YES";
  return 0;
}
