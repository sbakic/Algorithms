#include <algorithm>
#include <stdio.h>

using namespace std;

long long a[2048], index = 0;

void make(long long num) {
  a[index++] = num;
	if (num > 1000000000) return;
	make(num * 10 + 4);
	make(num * 10 + 7);
}
int main() {
  int n;
	make(0);
  sort(a, a + 2048);
  scanf("%d", &n);
	for (int i = 0; i < 1024; i++) {
    if (a[i] == n) {
      printf("%d", i - 1);
      break;
    }
	}
	return 0;
}
