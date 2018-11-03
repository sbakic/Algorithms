#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, s, f, t[100000], l[100000], r[100000];
  scanf("%d %d %d %d", &n, &m, &s, &f);
  for (int i = 0; i < m; i++) {
    scanf("%d %d %d", &t[i], &l[i], &r[i]);
  }
  for (int i = 0, time = 1; s != f; time++) {
    int check = (s < f) ? s + 1 : s - 1;
    if (t[i] != time) {
      (s < f) ? printf("R") : printf("L");
      s = check;
    }
    else {
      if ((s < l[i] || s > r[i]) && (check < l[i] || check > r[i])) {
        (s < f) ? printf("R") : printf("L");
        s = check;
      }
      else printf("X");
      i++;
    }
  }
  return 0;
}
