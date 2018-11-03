#include <iostream>

using namespace std;

int find(int n) {
  if (n == 0) return 0;
  int a = 1;
  while (a * 2 <= n) a *= 2;
  int value = 1 + find(n - a);
  return value > 2 ? 0 : value;
}

int main() {
  int n;
  cin >> n;
  cout << find(n - 1);
  return 0;
}
