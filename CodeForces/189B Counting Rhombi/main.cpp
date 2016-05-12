#include <iostream>

using namespace std;

int main() {
  long long ans = 0;
  int w, h;
  cin >> w >> h;
  for (int i = 1; 2 * i <= w; i++) {
    for (int j = 1; 2 * j <= h; j++) {
      ans += (long long)((w + 1 - 2 * i) * (h + 1 - 2 * j));
    }
  }
  cout << ans;
  return 0;
}
