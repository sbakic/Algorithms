#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int difference = 0;
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
      if (s[i] != s[n - 1 - i]) {
        difference += max(s[i], s[n - 1 - i]) - min(s[i], s[n - 1 - i]);
      }
    }
    cout << difference << '\n';
  }
  return 0;
}
