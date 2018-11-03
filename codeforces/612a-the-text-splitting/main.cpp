#include <iostream>

using namespace std;

int main() {
  string s;
  int n, p, q;
  cin >> n >> p >> q >> s;
  for (int i = 0; i <= 100; i++) {
    for (int j = 0; j <= 100; j++) {
      if (i * p + j * q == n) {
        cout << i + j << '\n';
        int x = 0;
        for (int k = 0; k < i; k++) {
          for (int l = 0; l < p; l++) {
            cout << s[x++];
          }
          cout << '\n';
        }
        for (int k = 0; k < j; k++) {
          for (int l = 0; l < q; l++) {
            cout << s[x++];
          }
          cout << '\n';
        }
        return 0;
      }
    }
  }
  cout << "-1";
  return 0;
}
