#include <bits/stdc++.h>

using namespace std;

int check(int points[], int n) {
  int a[200000], b[200000], j = 0, k = 0;
  for (int i = 0; i < n; i++) {
    if (points[i] > 0) a[j++] = points[i];
    else b[k++] = abs(points[i]);
  }
  for (int i = 0; i < min(j, k); i++) {
    if (a[i] > b[i]) return 1;
    if (a[i] < b[i]) return -1;
  }
  if (j > k) return 1;
  if (k < j) return -1;
  return 0;
}

int main() {
  int n, points[200000];
  long long a = 0, b = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &points[i]);
    if (points[i] > 0) a += points[i];
    else b += abs(points[i]);
  }
  if (a > b) cout << "first";
  else if (b > a) cout << "second";
  else if (check(points, n) == 1) cout << "first";
  else if (check(points, n) == -1) cout << "second";
  else {
    if (points[n - 1] > 0) cout << "first";
    else cout << "second";
  }
  return 0;
}
