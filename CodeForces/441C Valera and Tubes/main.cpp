#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> a[90000];
  int n, m, k, r = 2, curr = 0;
  scanf("%d %d %d", &n, &m, &k);
  if (k == 1) r = n * m - 2 * (k - 1);
  for (int i = 0, l = 0; i < n; i++) {
    for (int j = (i % 2 == 0 ? 0 : m - 1); ;) {
      if ((i % 2 == 0 && j == m) || (i % 2 == 1 && j == -1)) break;
      if (curr == r) {
        curr = 0;
        l++;
        if (l + 1 == k) r = n * m - 2 * (k - 1);
      }
      a[l].push_back(i + 1);
      a[l].push_back(j + 1);
      curr++;
      if (i % 2 == 0) j++;
      else j--;
    }
  }
  for (int i = 0; i < k; i++) {
    printf("%d ", (int) a[i].size() / 2);
    for (int j = 0; j < (int) a[i].size(); j++) {
      printf("%d ", (int) a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
