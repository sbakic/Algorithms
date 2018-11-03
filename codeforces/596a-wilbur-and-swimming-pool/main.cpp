#include <iostream>

using namespace std;

int main() {
  pair<int, int> a[4];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }
  if (n == 1 || (n == 2 && (a[0].first == a[1].first || a[0].second == a[1].second))) {
    cout << "-1";
    return 0;
  }
  int x, y;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (!(a[i].first == a[j].first || a[i].second == a[j].second)) {
        x = abs(a[i].first - a[j].first);
        y = abs(a[i].second - a[j].second);
      }
    }
  }
  cout << x * y;
  return 0;
}
