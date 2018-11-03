#include <bits/stdc++.h>

using namespace std;

int a[100], b[100], length = 0;

bool bfs(int x, int y) {
  stack<int> s;
  bool f[101] = {};
  s.push(x);
  f[x] = true;
  while (!s.empty()) {
    int top = s.top();
    s.pop();
    int x1 = a[top], y1 = b[top];
    if (top == y) return true;
    for (int i = 0; i < length; i++) {
      int newX = a[i], newY = b[i];
      if ((newX < x1 && newY > x1) || (newX < y1 && newY > y1)) {
        if (!f[i]) {
          f[i] = true;
          s.push(i);
        }
      }
    }
  }
  return false;
}
int main() {
  int n, t, x, y;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t >> x >> y;
    if (t == 1) {
      a[length] = x;
      b[length] = y;
      length++;
    }
    else {
      cout << (bfs(x - 1, y - 1) ? "YES" : "NO") << endl;
    }
  }
  return 0;
}
