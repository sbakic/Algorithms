#include <cstdio>

int main() {
  char a[9][9];
  for (int i = 0; i < 8; i++) {
    scanf("%s", a[i]);
  }
  for (int i = 0; i < 8; i++) {
    bool found = false;
    for (int j = 0; j < 7; j++) {
      if (a[i][j] == a[i][j + 1]) found = true;
    }
    if (found) {
      printf("NO");
      return 0;
    }
  }
  printf("YES");
  return 0;
}
