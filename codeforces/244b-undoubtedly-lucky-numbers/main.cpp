#include <bits/stdc++.h>

using namespace std;

int i, j;
bool first = true;
set<long long> a;

void make(long long start) {
  if (start > 1e9 || (start == 0 && !first)) return;
  a.insert(start);
  first = false;
  make(10 * start + i);
  make(10 * start + j);
}

int main() {
  int n, count = 0;
  cin >> n;
  for (i = 0; i <= 8; i++) {
    for (j = i + 1; j <= 9; j++) {
      first = true;
      make(0);
    }
  }
  for (set<long long>::iterator i = a.begin(); i != a.end(); i++) {
    if (*i > n) break;
    count++;
  }
  cout << count - 1;
  return 0;
}
