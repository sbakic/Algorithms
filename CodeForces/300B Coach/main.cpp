#include <bits/stdc++.h>

using namespace std;

vector<int> v[49], vv[49];
bool b[49];
int length = 0;

int dfs(int k, int n) {
  stack<int> s;
  bool f[49] = {};
  if (v[k].size() > 0) {
    s.push(v[k][0]);
    f[k] = true;
    b[k] = true;
    vv[length].push_back(k);
  }
  while (!s.empty()) {
    int top = s.top();
    s.pop();
    if (!f[top]) {
      f[top] = true;
      b[top] = true;
      vv[length].push_back(top);
      for (int i = 0; i < (int) v[top].size(); i++) {
        s.push(v[top][i]);
      }
    }
  }
  for (int i = 0; i < n && (int) vv[length].size() < 3; i++) {
    if (v[i + 1].size() == 0 && !b[i + 1]) {
      vv[length].push_back(i + 1);
      b[i + 1] = true;
    }
  }
  if (vv[length].size() > 3) return -1;
  else {
    if (vv[length].size() == 3) length++;
    return 0;
  }
}

int main() {
  int n, m, curr = 0;
  cin >> n >> m;
  while (m--) {
    int x, y;
    cin >> x >> y;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  for (int i = 0; i < n; i++) {
    if (!b[i + 1] && v[i + 1].size() && dfs(i + 1, n) == -1) {
      cout << "-1";
      return 0;
    }
  }
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < (int) vv[i].size(); j++) {
      cout << vv[i][j] << " ";
    }
    cout << '\n';
  }
  for (int i = 0; i < n; i++) {
    if (v[i + 1].size() == 0 && !b[i + 1]) {
      cout << i + 1 << " ";
      curr++;
    }
    if (curr > 0 && curr == 3) {
      cout << '\n';
      curr = 0;
    }
  }
  return 0;
}
