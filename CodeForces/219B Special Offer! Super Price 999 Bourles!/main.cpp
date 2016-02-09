#include <bits/stdc++.h>

using namespace std;

int digits(long long p) {
  int n = 0;
  while (p) {
    p /= 10;
    n++;
  }
  return n;
}

bool check(long long curr) {
  while (curr) {
    if (curr % 10 != 9) return false;
    curr /= 10;
  }
  return true;
}

int myCount(long long n) {
  int curr = 0;
  while (n) {
    if (n % 10 == 9) curr++;
    n /= 10;
  }
  return curr;
}

int main() {
  vector<long long> a;
  long long p, d;
  cin >> p >> d;
  long long curr = p;
  while (!check(curr)) {
    int count = 0;
    while (curr && curr % 10 == 9) {
      curr /= 10;
      count++;
    }
    curr -= curr % 10;
    if (curr > 0) curr--;
    for (int i = 0; i < count; i++) {
      curr = curr * 10 + 9;
    }
    a.push_back(curr);
  }
  int n = 0;
  n = a.size();
  for (int i = 0; i < n && a[0] >= p - d; i++) {
    if (a[i] < p - d) {
      printf("%I64d", a[i - 1]);
      return 0;
    }
  }
  if (n > 2 && check(a[n - 1]) && a[n - 2] >= p - d) printf("%I64d", a[n - 2]);
  else if (n == 1 && myCount(a[0]) == myCount(p)) printf("%I64d", p);
  else printf("%I64d", d == 0 || n == 0 || a[0] < p - d ? p : a[n - 1]);
  return 0;
}
