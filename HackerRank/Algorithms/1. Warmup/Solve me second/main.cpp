#include <iostream>

using namespace std;

int solveMeSecond(int a, int b) {
  return a + b;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int num1, num2, sum;
    cin >> num1 >> num2;
    sum = solveMeSecond(num1, num2);
    cout << sum << endl;
  }
  return 0;
}
