#include <iostream>

using namespace std;

int main() {
  int n, curr = 1e9, digits = 10;
  long long count = 0;
  cin >> n;
  while (n) {
    if (n >= curr){
      count += (long long) digits * (n - curr + 1);
      n = curr - 1;
    }
    digits--;
    curr /= 10;
  }
  cout << count;
  return 0;
}
