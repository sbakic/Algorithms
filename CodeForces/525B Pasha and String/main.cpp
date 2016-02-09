#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
  int m, a, sum[200005];
  char c[200005];
  scanf("%s", c);
  int length = strlen(c);
  cin >> m;
  while (m--) {
    cin >> a;
    sum[a]++;
  }
  for (int i = 1; i <= length / 2; i++) {
    sum[i] += sum[i - 1];
  }
  for (int i = 1; i <= length / 2; i++) {
    if (sum[i] % 2 == 1) {
      swap(c[i - 1], c[length - i]);
    }
  }
  cout << c;
  return 0;
}
