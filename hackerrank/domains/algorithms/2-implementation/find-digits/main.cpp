#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, a;
    cin >> n;
    a = n;
    int count = 0;
    while (a) {
      int b = a % 10;
      if (b != 0 && n % b == 0) count++;
      a /= 10;
    }
    cout << count << '\n';
  }
  return 0;
}
