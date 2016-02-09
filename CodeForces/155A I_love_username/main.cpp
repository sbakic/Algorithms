#include <iostream>

using namespace std;

int main() {
  int n, a[1000], count = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int minScore = a[0], maxScore = a[0];
  for (int i = 1; i < n; i++) {
    minScore = min(minScore, a[i - 1]);
    maxScore = max(maxScore, a[i - 1]);
    if (a[i] < minScore || a[i] > maxScore) count++;
  }
  cout << count;
  return 0;
}
