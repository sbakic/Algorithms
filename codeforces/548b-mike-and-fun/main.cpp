#include <stdio.h>
#include <algorithm>

using namespace std;

int n, m, q;
int a[500][500], row[500];

void set(int position) {
  row[position] = 0;
  int count = 0;
  for (int j = 0; j <= m; j++) {
    if (a[position][j] == 1) count++;
    else count = 0;
    row[position] = max(row[position], count);
  }
}

int main() {
  scanf("%d %d %d", &n, &m, &q);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &a[i][j]);
    }
    set(i);
  }
  int x, y;
  while (q--) {
    scanf("%d %d", &x, &y);
    if (a[x - 1][y - 1] == 1) a[x - 1][y - 1] = 0;
    else a[x - 1][y - 1] = 1;
    set(x - 1);
    int maxOnes = 0;
		for (int i = 0; i < n; i++) {
      maxOnes = max(maxOnes, row[i]);
		}
    printf("%d\n", maxOnes);
  }
  return 0;
}
