#include <bits/stdc++.h>

using namespace std;

int a[100] = {}, length = 0;

bool check(long long i) {
  int four = 0, seven = 0;
  while (i) {
    if (i % 10 == 4) four++;
    if (i % 10 == 7) seven++;
    i /= 10;
  }
  return four == seven;
}

void make(long long i) {
  if (i > 1e9) return;
  if (check(i)) a[length++] = i;
  make(10 * i + 4);
  make(10 * i + 7);
}

int main() {
  int n;
  cin >> n;
  make(0);
  sort(a, a + 100);
  for (int i = 1; i < 100; i++) {
    if (a[i] >= n) {
      cout << a[i];
      return 0;
    }
  }
  cout << "4444477777";
  return 0;
}
