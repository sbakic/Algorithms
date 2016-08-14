#include <bits/stdc++.h>

using namespace std;

long long custom_pow(int a, int b) {
  long long ans = 1;
  for (int i = 0; i < b; i++) {
    ans *= a;
  }
  return ans;
}

bool check(long long a, int i) {
  int sum = 0;
  while (a) {
    sum += a % 10;
    a /= 10;
  }
  return sum == i;
}

int main() {
  vector<int> v;
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 1; i <= 81; i++) {
    long long curr = b * custom_pow(i, a) + c;
    if (curr < 1e9 && check(curr, i)) v.push_back(curr);
  }
  cout << v.size() << '\n';
  for (int i = 0; i < (int) v.size(); i++) {
    cout << v[i] << " ";
  }
  return 0;
}
