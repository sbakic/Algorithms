#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100000], minOdd = 1e9;
  long long sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += (long long) a[i];
    if (a[i] & 1) minOdd = min(minOdd, a[i]);
  }
  if (sum & 1) sum -= minOdd;
  cout << sum;
  return 0;
}
