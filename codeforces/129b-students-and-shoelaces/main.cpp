#include <bits/stdc++.h>

using namespace std;

int main() {
  bool b[100][100] = {};
  int n, m, a[100] = {}, count, ans = -1;
	scanf("%d %d", &n, &m);
	while (m--) {
    int x, y;
		scanf("%d %d", &x, &y);
		b[x - 1][y - 1] = b[y - 1][x - 1] = 1;
		a[x - 1]++;
		a[y - 1]++;
	}
	do{
		int curr[100] = {};
		count = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == 1) {
				curr[count++] = i;
				a[i]--;
			}
		}
		for (int i = 0; i < count; i++) {
			for (int j = 0; j < n; j++) {
				if (b[curr[i]][j]) a[j]--;
			}
		}
		ans++;
	}
	while (count > 0);
	printf("%d", ans);
	return 0;
}
