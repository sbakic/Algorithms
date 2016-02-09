#include <iostream>

using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    if (s == "X++" || s == "++X") ans++;
    if (s == "X--" || s == "--X") ans--;
  }
  cout << ans;
  return 0;
}
