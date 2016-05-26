#include <bits/stdc++.h>

using namespace std;

int make(int d, int m) {
  int ans = d;
  for (int i = 1; i < m; i++) {
    switch(i) {
      case 1: case 3:  case 5: case 7: case 8: case 10: case 12: ans += 31; break;
      case 4: case 6: case 9: case 11: ans += 30; break;
      case 2: ans += 28; break;
    }
  }
  return ans;
}

int main() {
  int n, a[2 * 365] = {}, ans = 0;
  ofstream fout ("output.txt");
  ifstream fin ("input.txt");
  fin >> n;
  while (n--) {
    int m, d, p, t, i;
    fin >> m >> d >> p >> t;
    i = 365 + make(d, m) - 1;
    while (t--) {
      a[i--] += p;
    }
  }
  for (int i = 0; i < 2 * 365; i++) {
    ans = max(ans, a[i]);
  }
  fout << ans;
  return 0;
}
