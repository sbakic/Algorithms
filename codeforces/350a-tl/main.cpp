#include <iostream>

using namespace std;

int main() {
  int n, m, a[100], b[100];
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  int maxPass = 0, minPass = 100, minWrong = 100;
  for (int i = 0; i < n; i++) {
    maxPass = max(maxPass, a[i]);
    minPass = min(minPass, a[i]);
  }
  for (int i = 0; i < m; i++) {
    minWrong = min(minWrong, b[i]);
  }
  max(2 * minPass, maxPass) < minWrong ? cout << max(2 * minPass, maxPass) : cout << "-1";
  return 0;
}
