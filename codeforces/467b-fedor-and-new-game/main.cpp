#include <iostream>

using namespace std;

bool check (int fedor, int a, int k) {
  int count = 0, x = fedor ^ a;
  for (int i = 0; i < 20; i++) {
    if (x & (1 << i)) count++;
  }
  return count <= k;
}

int main() {
  int n, m, k, fedor, a[1000], count = 0;
  cin >> n >> m >> k;
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }
  cin >> fedor;
  for (int i = 0; i < m; i++) {
    if (check(fedor, a[i], k)) count++;
  }
  cout << count;
  return 0;
}
