#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  long long ans = 1, curr = 0;
  for (int i = 0; i < n; i++) {
    int a = s[i] - '0', b = s[i + 1] - '0';
    if (a + b == 9) {
      curr++;
      continue;
    }
    if (curr > 0 && curr % 2 == 0) {
      ans *= (long long) curr / 2 + 1;
    }
    curr = 0;
  }
  cout << ans;
  return 0;
}
