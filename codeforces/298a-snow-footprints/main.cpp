#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, minStart = 1000, maxStart = -1, minEnd = 1000, maxEnd = -1;
  bool foundR = false, foundL = false;
  cin >> n;
  string s;
  cin >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'R') {
      minStart = min(minStart, i + 1);
      maxStart = max(maxStart, i + 2);
      foundR = true;
    }
    if (s[i] == 'L') {
      minEnd = min(minEnd, i);
      maxEnd = max(maxEnd, i + 1);
      foundL = true;
    }
  }
  if (foundL && foundR) cout << minStart << " " << minEnd;
  else if (foundR) cout << minStart << " " << maxStart;
  else cout << maxEnd << " " << minEnd;
  return 0;
}
