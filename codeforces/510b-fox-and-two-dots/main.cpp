#include <bits/stdc++.h>

using namespace std;

int n, m;
char c[51][51];
bool f[50][50];
bool found = false;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(int x, int y, int fromX, int fromY, char color) {
  if (x < 0 || x >= n || y < 0 || y >= m) return;
  if (c[x][y] != color) return;
  if (f[x][y]) {
    found = true;
    return;
  }
  f[x][y] = true;
  for (int i = 0; i < 4; i++) {
    int nextX = x + dx[i];
    int nextY = y + dy[i];
    if (nextX == fromX && nextY == fromY) continue;
    dfs(nextX, nextY, x, y, color);
  }
}

int main() {
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%s", c[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (!f[i][j]) {
        dfs(i, j, 0, 0, c[i][j]);
      }
    }
  }
  printf("%s", found ? "Yes" : "No");
  return 0;
}
