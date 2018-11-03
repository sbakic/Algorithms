#include <bits/stdc++.h>

using namespace std;

vector<int> a[101];
bool b[101];
int curr, sum;

void dfs(int x){
  b[x] = true;
  sum += a[x].size();
  curr++;
  for (int i = 0; i < a[x].size(); i++) {
    if (!b[a[x][i]]) {
      dfs(a[x][i]);
    }
  }
}

int main() {
  int n, m, ans = 0;
  cin >> n >> m;
  while (m--) {
    int x, y;
    cin >> x >> y;
    a[x].push_back(y);
    a[y].push_back(x);
  }
  for (int i = 1; i <= n; i++) {
    if (!b[i]) {
      sum = 0;
      curr = 0;
      dfs(i);
      if (curr % 2 != 0 && curr * 2 == sum) ans++;
    }
  }
  cout << ((n - ans) % 2 == 0 ? ans : ans + 1);
  return 0;
}
