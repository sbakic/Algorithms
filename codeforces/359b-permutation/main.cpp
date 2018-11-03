#include <iostream>

using namespace std;

int main() {
  int n, k, a[100000];
  cin >> n >> k;
  for (int i = 0; i < 2 * n; i++) {
    a[i] = i + 1;
  }
  for (int i = 0; i < 2 * n && k--; i += 2) {
    swap(a[i], a[i + 1]);
  }
  for (int i = 0; i < 2 * n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
