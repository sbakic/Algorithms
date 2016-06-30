#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<pair<int, int>> v;
  pair<int, int> b[3];
  int n, a[100000];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  for (int i = 0; i < 3; i++) {
    b[i].first = -1;
    b[i].second = 0;
  }
  for (int i = 1; i < n; i++) {
    int curr = a[i] - a[i - 1];
    for (int j = 0; j < 3; j++) {
      if (b[j].first == -1 && curr != b[j].first) {
        b[j].first = curr;
        b[j].second++;
        break;
      }
      if (curr == b[j].first) {
        b[j].second++;
        break;
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    if (b[i].first != -1) v.push_back(make_pair(b[i].first, b[i].second));
  }
  int m = v.size();
  if (m == 0) cout << "-1";
  else if (m == 1) {
    int mid = b[0].first;
    if (mid == 0) cout << "1" << '\n' << a[0];
    else if (n == 2 && mid % 2 == 0) {
      cout << "3" << '\n' << a[0] - mid << " " << a[n - 1] - mid / 2 << " "<< a[n - 1] + mid;
    }
    else cout << "2" << '\n' << a[0] - mid << " " << a[n - 1] + mid;
  }
  else if (m == 2) {
    int first = b[0].first, firstCount = b[0].second, second = b[1].first, secondCount = b[1].second;
    if (first * 2 == second && secondCount == 1) {
      cout << "1" << '\n';
      for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] == second) {
          cout << a[i] - first;
          break;
        }
      }
    }
    else if (second * 2 == first && firstCount == 1) {
      cout << "1" << '\n';
      for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] == first) {
          cout << a[i] - second;
          break;
        }
      }
    }
    else cout << "0";
  }
  else cout << "0";
  return 0;
}
