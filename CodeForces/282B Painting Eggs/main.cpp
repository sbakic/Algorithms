#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<int, int> a[1000000];
  int n, sumA = 0, sumG = 0;
  string s = "";
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a[i].first, &a[i].second);
  }
  for (int i = 0; i < n; i++) {
    if (abs(sumA + a[i].first - sumG) <= 500) {
      sumA += a[i].first;
      s += "A";
    }
    else {
      sumG += a[i].second;
      s += "G";
    }
  }
  cout << s;
  return 0;
}
