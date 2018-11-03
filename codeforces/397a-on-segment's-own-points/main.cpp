#include <iostream>

using namespace std;

int main() {
  pair<int, int> a[100];
  int n, b[101] = {0}, count = 0, left, right;
  cin >> n;
  cin >> left >> right;
  for (int i = 0; i < n - 1; i++) {
    cin >> a[i].first >> a[i].second;
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = a[i].first; j <= a[i].second - 1; j++) {
      b[j] = 1;
    }
  }
  for (int i = left; i < right; i++) {
    if (b[i] == 0) count++;
  }
  cout << count;
  return 0;
}
