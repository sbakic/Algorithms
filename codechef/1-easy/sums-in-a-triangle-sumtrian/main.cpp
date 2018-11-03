#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
  int t, n, a[100][100], sum[100][100];
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        sum[i][j] = a[i][j] = 0;
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= i; j++) {
        scanf("%d", &a[i][j]);
      }
    }
   for (int i = 0; i < n; i++) {
      sum[n - 1][i] = a[n - 1][i];
    }
		for (int i = n - 2; i >= 0; i--) {
			for (int j = 0; j <= i; j++) {
				sum[i][j] = max(sum[i + 1][j], sum[i + 1][j + 1]) + a[i][j];
      }
    }
		printf("%d\n",sum[0][0]);
  }
  return 0;
}
