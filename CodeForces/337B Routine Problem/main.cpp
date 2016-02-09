#include <iostream>

using namespace std;

int gcd(int a, int b) {
  return (b == 0) ? a : gcd(b, a % b);
}

int main() {
  int a, b, c, d, p, q;
  cin >> a >> b >> c >> d;
  if (a * d > b * c) {
    p = a * d;
    q = p - b * c;
  }
  else if (a * d < b * c){
    p = b * c;
    q = p - a * d;
  }
  else {
    cout << "0/1";
    return 0;
  }
  int divisor = gcd(p, q);
  cout << q / divisor << "/" << p / divisor;
  return 0;
}
