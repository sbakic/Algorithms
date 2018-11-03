#include <iostream>

using namespace std;

int main() {
  pair<int, int> a[100];
  int n, lower = 0, upper = 0, mix = 0, count = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }
  for (int i = 0; i < n; i++) {
    upper += a[i].first;
    lower += a[i].second;
    if (a[i].first % 2 == 0 && a[i].second % 2 == 1 || a[i].first % 2 == 1 && a[i].second % 2 == 0) mix++;
  }
  if (upper % 2 == 0 && lower % 2 == 0) cout << "0";
  else if (upper % 2 == 0 && lower % 2 == 1 || upper % 2 == 1 && lower % 2 == 0) cout << "-1";
  else if (upper % 2 == 1 && lower % 2 == 1 && mix > 0) cout << "1";
  else cout << "-1";
  return 0;
}
