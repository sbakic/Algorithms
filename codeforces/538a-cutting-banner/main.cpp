#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main() {
  char c[100], s[10] = {'C', 'O', 'D', 'E', 'F', 'O', 'R', 'C', 'E', 'S'};
  scanf("%s", c);
  int n = strlen(c);
  int l = 0, r = 0;
  while (l < min(10, n) && c[l] == s[l]) l++;
  while (r < min(10, n) && c[n - r - 1] == s[10 - r - 1]) r++;
  l + r >= 10 ? printf("YES") : printf("NO");
  return 0;
}
