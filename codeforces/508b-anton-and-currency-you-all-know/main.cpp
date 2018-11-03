#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), count = 0, last = s[n - 1] - '0', lastEven = -1;
  for (int i = 0; i < n; i++) {
    if ((s[i] - '0') % 2 == 0) {
      count++;
      lastEven = i;
    }
  }
  if (count >= 1) {
    for (int i = 0; i < n; i++) {
      int digit = s[i] - '0';
      if (digit % 2 == 0 && digit < last || digit % 2 == 0 && digit > last && i == lastEven) {
        swap(s[i], s[n - 1]);
        break;
      }
    }
    cout << s;
  }
  else cout << "-1";
  return 0;
}
