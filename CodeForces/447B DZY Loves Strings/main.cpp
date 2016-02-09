#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), k, a[26], sum = 0, maxValue = 0;
  cin >> k;
  for (int i = 0; i < 26; i++) {
    cin >> a[i];
    maxValue = max(maxValue, a[i]);
  }
  for (int i = 0; i < n; i++) {
    sum += (i + 1) * a[s[i] - 'a'];
  }
  for (int i = 0; i < k; i++) {
    sum += (n + i + 1) * maxValue;
  }
  cout << sum;
  return 0;
}
