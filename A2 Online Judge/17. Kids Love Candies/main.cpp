#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k, count = 0;
    cin >> n >> k;
    while (n--) {
      int a;
      cin >> a;
      count += a / k;
    }
    cout << count << '\n';
  }
  return 0;
}
