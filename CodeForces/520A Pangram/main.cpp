#include <stdio.h>
#include <ctype.h>

bool alphabet[26];

int main() {
  int n;
  char c[100];
  scanf("%d %s", &n, c);
  for (int i = 0; i < n; i++) {
    alphabet[tolower(c[i]) - 'a'] = true;
  }
  for (int i = 0; i < 26; i++) {
    if (!alphabet[i]) {
      printf("NO");
      return 0;
    }
  }
  printf("YES");
  return 0;
}
