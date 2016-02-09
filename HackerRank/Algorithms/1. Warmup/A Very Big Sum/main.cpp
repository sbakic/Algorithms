#include <iostream>

using namespace std;

int main() {
  int n;
  long long sum = 0;
  cin >> n;
  while (n--) {
    int a;
    cin >> a;
    sum += (long long) a;
  }
  cout << sum;
  return 0;
}
