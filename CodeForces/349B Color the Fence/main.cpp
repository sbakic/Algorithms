#include <bits/stdc++.h>

using namespace std;

struct compare {
  bool operator()(const pair<int,int> &left, const pair<int,int> &right) {
    if (left.first < right.first) return true;
    if (left.first == right.first) return left.second > right.second;
    return false;
  }
};

struct back {
  bool operator()(const pair<int,int> &left, const pair<int,int> &right) {
    return left.second > right.second;
  }
};

int main() {
  pair<int, int> a[9];
  int v;
  cin >> v;
  for (int i = 0; i < 9; i++) {
    cin >> a[i].first;
    a[i].second = i + 1;
  }
  sort(a, a + 9, compare());
  if (v < a[0].first) cout << "-1";
  char c[1000000];
  int n = 0, curr;
  for (int i = 0; i < 9; i++) {
    while (v >= a[i].first) {
      curr = a[i].first;
      c[n++] = a[i].second + '0';
      v -= a[i].first;
    }
  }
  c[n++] = '\0';
  sort(a, a + 9, back());
  for (int i = 0, j = 0; i < 9; i++) {
    while(j < n - 1 && v + curr - a[i].first >= 0) {
      c[j++] = a[i].second + '0';
      v += curr - a[i].first;
    }
  }
  printf("%s", c);
  return 0;
}
