#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < 2 * n + 1; i++) {
    int curr = (i < n) ? i - n : n - i;
    for (int j = 0; j < n; j++) {
      if (curr >= 0) cout << curr << " ";
      else cout << "  ";
      curr++;
    }
    for (int j = 0; j < n + 1; j++) {
      if (curr >= 0 && curr - 1 >= 0) cout << curr << " ";
      else if (curr >= 0) cout << curr;
      curr--;
    }
    cout << '\n';
  }
  return 0;
}
