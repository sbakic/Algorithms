#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
  int n, count = 0;
  char a[1000], b[1000];
  scanf("%d %s %s", &n, a, b);
  for (int i = 0; i < n; i++) {
    count += min(abs((a[i] - '0') - (b[i] - '0')), 10 + min((a[i] - '0'),(b[i] - '0')) - max((a[i] - '0'),(b[i] - '0')));
  }
  printf("%d", count);
  return 0;
}
