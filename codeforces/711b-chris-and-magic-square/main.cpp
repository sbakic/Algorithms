#include <bits/stdc++.h>

using namespace std;

bool check(set<long long> r, set<long long> c) {
  if (r.size() != 2 || c.size() != 2) return false;
  for (set<long long>::iterator i = r.begin(), j = c.begin(); i != r.end(); i++, j++) {
    if (*i != *j) return false;
  }
  return true;
}

bool dig(int I, int J, int n) {
  for (int i = 0, j = n - 1; i < n; i++, j--) {
    if ((i == I && i == J) || (i == I && j == J)) return true;
  }
  return false;
}

int main() {
  set<long long> r, c;
  int n, a[500][500], I, J;
  long long d1 = 0, d2 = 0, R = 0, C = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    long long curr_r = 0, curr_c = 0;
    for (int j = 0; j < n; j++) {
      curr_r += a[i][j];
      curr_c += a[j][i];
      if (a[i][j] == 0) {
        I = i;
        J = j;
      }
    }
    r.insert(curr_r);
    c.insert(curr_c);
  }
  for (int i = 0, j = n - 1; i < n; i++, j--) {
    d1 += a[i][i];
    d2 += a[i][j];
  }
  for (int i = 0; i < n; i++) {
    R += a[i][J];
    C += a[I][i];
  }
  if (n == 1) {
    printf("1");
    return 0;
  }
  if (!check(r, c)) printf("-1");
  else {
    set<long long>::iterator i = r.begin();
    long long diff = abs(*i - *(++i));
    if ((d1 == d2 && ((R == *i || C == *i) || (d1 != *i && !dig(I, J, n)))) || (d1 != d2 && ((dig(I, J, n) && min(d1, d2) + diff != max(d1, d2)) || min(d1, d2) + diff != *(i++) || !dig(I, J, n)))) printf("-1");
    else printf("%I64d", diff);
  }
  return 0;
}
