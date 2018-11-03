#include <iostream>

using namespace std;

int modulo(int a, int b){
  return (a % b + b) % b;
}

int make(int n, int f1, int f2, int divisor) {
  if (n == 1) return modulo(f1, divisor);
  if (n == 2) return modulo(f2, divisor);
  if (n == 3) return modulo(f2 - f1, divisor);
  return make(n - 1, f2, f2 - f1, divisor);
}

int main() {
  int n, f1, f2, divisor = 1000000007;
  cin >> f1 >> f2 >> n;
  cout << make(n % 6 == 0 ? n % 6 + 6: n % 6, f1, f2, divisor);
  return 0;
}
