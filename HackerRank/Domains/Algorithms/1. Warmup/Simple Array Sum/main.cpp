#include <iostream>

using namespace std;

int main() {
  int n, sum = 0;
  cin >> n;
  while (n--) {
    int a;
    cin >> a;
    sum += a;
  }
  cout << sum;
  return 0;
}
