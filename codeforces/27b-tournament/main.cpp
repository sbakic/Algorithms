#include <bits/stdc++.h>

using namespace std;

vector<int> v[51];

bool dfs(int x, int y) {
  stack<int> s;
  bool b[51] = {};
  s.push(x);
  while (!s.empty()) {
    int top = s.top();
    s.pop();
    if (!b[top]) {
      b[top] = true;
      if (top == y) return true;
      for (int i = 0; i < v[top].size(); i++) {
        if (!b[v[top][i]]) s.push(v[top][i]);
      }
    }
  }
  return false;
}

int main() {
  int n, a[50] = {}, ans[2];
  cin >> n;
  for (int i = 0; i < n * (n - 1) / 2 - 1; i++) {
    int x, y;
    cin >> x >> y;
    v[x].push_back(y);
    a[x - 1]++;
    a[y - 1]++;
  }
  for (int i = 0, j = 0; i < 50; i++) {
    if (a[i] == n - 2) ans[j++] = i;
  }
  if (dfs(ans[0] + 1, ans[1] + 1)) cout << ans[0] + 1 << " " << ans[1] + 1;
  else cout << ans[1] + 1 << " " << ans[0] + 1;
  return 0;
}
