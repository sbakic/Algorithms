#include <iostream>

using namespace std;

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

int gcdMulti(int a[], int n) {
  int x = a[0];
  for (int i = 1; i < n; i++) {
    x = gcd(x, a[i]);
  }
  return x;
}

int main() {
  int n, a[100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << n * gcdMulti(a, n);
  return 0;
}
