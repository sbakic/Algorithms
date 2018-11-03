#include <iostream>

using namespace std;

int main() {
  long long n, k = 1, curr = 0;
  cin >> n;
  do {
    curr += k;
    if (curr >= n) break;
    k++;
  }
  while (true);
  for (long long i = curr - k + 1, j = 1; i <= curr; i++, j++) {
    if (i == n) cout << j;
  }
  return 0;
}
