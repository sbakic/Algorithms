#include <stdio.h>
#include <utility>

using namespace std;

pair<char, int> a[10];

int main() {
  for (int i = 0; i < 10; i++) {
    a[i].first = i;
  }
  int k;
  char c[5][5];
  scanf("%d", &k);
  for (int i = 0; i < 4; i++) {
    scanf("%s", c[i]);
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      switch (c[i][j]) {
        case '1': a[1].second++; break;
        case '2': a[2].second++; break;
        case '3': a[3].second++; break;
        case '4': a[4].second++; break;
        case '5': a[5].second++; break;
        case '6': a[6].second++; break;
        case '7': a[7].second++; break;
        case '8': a[8].second++; break;
        case '9': a[9].second++; break;
      }
    }
  }
  for (int i = 1; i < 10; i++) {
    if (a[i].second > 2 * k) {
      printf("NO");
      return 0;
    }
  }
  printf("YES");
  return 0;
}
