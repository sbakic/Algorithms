#include <iostream>

using namespace std;

int main() {
  int n, t, b[100001] = {}, s[100001] = {};
  cin >> n >> t;
  while (n--) {
    char c;
    int v, q;
    cin >> c >> v >> q;
    if (c == 'B') b[v] += q;
    else s[v] += q;
  }
  int countB = t, countS = -1, count = 0;
  for (int i = 0; i < 100001; i++) {
    if (s[i] && count < t) {
      count++;
      countS = i;
    }
  }
  for (int i = countS; i >= 0; i--) {
    if (s[i]) cout << "S " << i << " " << s[i] << '\n';
  }
  for (int i = 100000; i >= 0 && countB > 0; i--) {
    if (b[i]) {
      cout << "B " << i << " " << b[i] << '\n';
      countB--;
    }
  }
  return 0;
}
