#include <iostream>

using namespace std;

bool check(pair<int, int> a[], int b[],int n) {
  for (int i = 0; i < n; i++) {
    if (b[i] != a[i].second) return false;
  }
  return true;
}

int main() {
  pair<int, int> a[30];
  int d, sum, b[30];
  bool find = false;
  cin >> d >> sum;
  for (int i = 0; i < d; i++) {
    cin >> a[i].first >> a[i].second;
    b[i] = -1;
  }
  while (sum > 0) {
    for (int i = 0; i < d; i++) {
      if (b[i] < a[i].first && sum - a[i].first >= 0) {
        b[i] = a[i].first;
        sum -= a[i].first;
      }
      else if (b[i] >= a[i].first && b[i] < a[i].second && sum - 1 >= 0) {
        b[i]++;
        sum--;
      }
      else if (b[i] == -1 && sum - a[i].first < 0) find = true;
    }
    if (check(a, b, d) || find) break;
  }
  if (sum == 0) {
    cout << "YES\n";
    for (int i = 0; i < d; i++) {
      cout << (b[i] < 0 ? 0 : b[i])<< " ";
    }
  }
  else cout << "NO";
  return 0;
}
