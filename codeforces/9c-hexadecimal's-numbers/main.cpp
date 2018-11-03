#include <bits/stdc++.h>

using namespace std;

int make(int number) {
  int b[10], length = 0, ans = 0;
  while (number) {
    b[length] = number % 2;
    number /= 2;
    length++;
  }
  for (int i = length - 1; i >= 0; i--) {
    ans = ans * 10 + b[i];
  }
  return ans;
}

int main() {
  int n, a[1024], ans = 0;
  cin >> n;
  for (int i = 1; i < 1024; i++) {
    a[i - 1] = make(i);
  }
  for (int i = 0; i < 1023; i++) {
    if (a[i] <= n) ans++;
  }
  cout << ans;
  return 0;
}
