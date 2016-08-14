#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "I " << (i % 2 == 0 ? "hate " : "love ") << (i == n - 1 ? "it" : "that ");
  }
  return 0;
}
