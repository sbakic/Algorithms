#include <iostream>

using namespace std;

int main() {
  int d, n, count = 0;
  cin >> d >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (i < n - 1) count += d - a;
  }
  cout << count;
  return 0;
}
