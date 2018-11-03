#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a[26] = {}, count = -1;
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
      a[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
      count = max(count, a[i]);
    }
    for (int i = 0; i < 26; i++) {
      if (a[i] == count) {
        cout << count << " " << (char) (i + 'a') << '\n';
        break;
      }
    }
  }
  return 0;
}
