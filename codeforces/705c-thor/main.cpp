 #include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q, a[300000], b[300001] = {}, c[300001] = {}, ans = 0, i = 0, j = 0;
  scanf("%d %d", &n, &q);
  while (q--) {
    int t, x;
    scanf("%d %d", &t, &x);
    if (t == 1) {
      a[i++] = x;
      b[x]++;
      c[x]++;
      ans++;
		}
    if (t == 2) {
      ans -= b[x];
      b[x] = 0;
		}
    if (t == 3) {
      while (j < x) {
        int curr = a[j++];
        if (c[curr]) c[curr]--;
        if(b[curr] > c[curr]) {
          b[curr]--;
          ans--;
        }
      }
    }
    printf("%d\n", ans);
	}
}
