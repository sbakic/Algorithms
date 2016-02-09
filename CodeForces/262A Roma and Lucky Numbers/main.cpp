#include <iostream>

using namespace std;

int main() {
  int n, k, number, count = 0;
  cin >> n >> k;
  while (n--) {
    cin >> number;
    int lucky = 0;
    while (number) {
      if (number % 10 == 4 || number % 10 == 7) lucky++;
      number /= 10;
    }
    if (lucky <= k) count++;
  }
  cout << count;
  return 0;
}
