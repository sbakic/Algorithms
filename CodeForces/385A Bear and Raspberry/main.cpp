#include <iostream>

using namespace std;

int main() {
  int n, c, a[100], profit = 0;
  cin >> n >> c;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    profit = max(profit, a[i] - a[i + 1] - c);
  }
  cout << profit;
  return 0;
}
