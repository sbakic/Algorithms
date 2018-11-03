#include <iostream>

using namespace std;

int make(int number) {
  int i = 1, result = 0;
  while (number) {
    int x = number % 10;
    if (x != 0) {
      result += i * x;
      i *= 10;
    }
    number /= 10;
  }
  return result;
}

int main() {
  int a, b, c, d, e, f;
  cin >> a >> b;
  c = a + b;
  d = make(a);
  e = make(b);
  f = make(c);
  d + e == f ? cout << "YES" : cout << "NO";
  return 0;
}
