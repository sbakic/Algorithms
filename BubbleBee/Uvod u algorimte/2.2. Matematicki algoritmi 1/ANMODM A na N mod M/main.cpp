#include <iostream>

using namespace std;

int main() {
  long long a, n, m;
  cin >> a >> n >> m;
  a %= m;
  long long ans = 1;
  while (n) {
    if (n % 2) ans = (ans * a) % m;
    a = (a * a) % m;
    n /= 2;
  }
  ans % m == 0 ? cout << "DA" : cout << "NE";
  return 0;
}
