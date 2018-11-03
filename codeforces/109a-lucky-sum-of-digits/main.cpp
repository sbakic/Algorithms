#include <bits/stdc++.h>

using namespace std;

int main() {
  string s = "";
  int n;
  cin >> n;
  for (int i = 0; i <= 250000; i++) {
    int curr = n - 4 * i;
    if (curr < 0) break;
    if (curr % 7 == 0) {
      int j = curr / 7;
      while (i--) s += "4";
      while (j--) s += "7";
      break;
    }
  }
  cout << (s.size() > 0 ? s : "-1");
  return 0;
}
