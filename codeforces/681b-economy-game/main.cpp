#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, max = 1e9, a = 1234567, b = 123456, c = 1234;
  cin >> n;
  for (int i = 0; i <= 810; i++) {
    for (int j = 0; j <= 8100; j++) {
      if (i * a + j * b <= n && (n - i * a - j * b) % c == 0) {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";
  return 0;
}
