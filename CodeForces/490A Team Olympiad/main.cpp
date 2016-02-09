#include <stdio.h>
#include <algorithm>
using namespace std;

int n, x, t[4][5001], num[4];

int main(){
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &x);
    t[x][++num[x]] = i + 1;
  }
  printf("%d\n", min(num[1],min(num[2],num[3])));
  for(int i = 0; i < min(num[1],min(num[2],num[3])); i++) {
    printf("%d %d %d\n", t[1][i + 1], t[2][i + 1], t[3][i + 1]);
  }

  return 0;
}
