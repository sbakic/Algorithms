#include <iostream>

using namespace std;

int main() {
  int n, a, count = 0, maxS = -1, minS = 100, indexMin, indexMax;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a > maxS) {
      maxS = a;
      indexMax = i;
    }
    if (a <= minS) {
      minS = a;
      indexMin = i;
    }
  }
  count += indexMax;
  indexMin < indexMax ? indexMin++ : indexMin;
  count += n - 1 - indexMin;
  cout << count;
  return 0;
}
