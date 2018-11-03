#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), mid;
  long long left = 0, right = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '^') {
      mid = i;
      break;
    }
  }
  for (int i = mid - 1, j = mid + 1; i >= 0 || j < n; i--, j++) {
    if (i >= 0 && s[i] != '=') left += (long long) (s[i] - '0') * (mid - i);
    if (j < n && s[j] != '=') right += (long long) (s[j] - '0') * (j - mid);
  }
  if (left > right) cout << "left";
  else if (right > left) cout << "right";
  else cout << "balance";
  return 0;
}
