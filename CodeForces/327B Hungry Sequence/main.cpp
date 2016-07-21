#include <bits/stdc++.h>

using namespace std;

void make(bool a[], int n) {
  a[1] = false;
  for (int i = 2; i * i <= n; i++) {
    if (a[i] == false) {
      for (int j = i; i * j <= n; j++) {
        a[i * j] = true;
      }
    }
  }
}

int main() {
  vector<int> v;
  int n;
  bool a[1300000] = {};
  cin >> n;
  make(a, 1300000);
  for (int i = 0; i < 1300000; i++) {
    if (!a[i]) v.push_back(i);
  }
  for (int i = 2; i < n + 2; i++) {
    cout << v[i] << " ";
  }
  return 0;
}
