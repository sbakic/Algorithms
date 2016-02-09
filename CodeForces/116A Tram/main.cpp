#include <iostream>

using namespace std;

int main() {
  int n, curr = 0, ans = 0;
  cin >> n;
  while (n--) {
    int a, b;
    cin >> a >> b;
    curr -= a;
    curr += b;
    ans = max(ans, curr);
  }
  cout << ans;
  return 0;
}
