#include <iostream>

using namespace std;

bool found(int n, int k) {
  int a[10] = {};
  while (n) {
    a[n % 10] = 1;
    n /= 10;
  }
  for (int i = 0; i <= k; i++) {
    if (a[i] == 0) return false;
  }
  return true;
}

int main() {
  int n, k, count = 0;
  cin >> n >> k;
  while (n--) {
    int a;
    cin >> a;
    if (found(a, k)) count++;
  }
  cout << count;
  return 0;
}
