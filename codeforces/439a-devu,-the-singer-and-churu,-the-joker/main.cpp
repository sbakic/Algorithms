#include <iostream>

using namespace std;

int main() {
  int n, d, a[100], count = 0;
  cin >> n >> d;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n && d >= 0; i++) {
    i == n - 1 ? d -= a[i] : d -= a[i] + 10;
    i == n - 1 ? count += d / 5 : count += 2;
  }
  d >= 0 ? cout << count : cout << "-1";
  return 0;
}
