#include <bits/stdc++.h>

using namespace std;

int main() {
  map<int, int> a;
  int n;
  long long ans = 0, diff = 0;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    a[x]++;
  }
  for (auto i : a) {
    for (int j = 0; j < 31; j++) {
      int curr = 1 << j;
      if (curr < i.first) continue;
      if (curr == i.first && i.second > 1) {
        ans += (long long) i.second * (i.second - 1) / 2;
        continue;
      }
      if (i.first + i.first != curr && i.second > 0 && a[curr - i.first] > 0) diff += (long long) i.second * a[curr - i.first];
    }
  }
  cout << ans + diff / 2;
  return 0;
}
