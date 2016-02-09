#include <stdio.h>

char change(char c) {
  switch (c) {
    case 'T': return '10'; break;
    case 'J': return '11'; break;
    case 'Q': return '12'; break;
    case 'K': return '13'; break;
    case 'A': return '14'; break;
  }
}

int main() {
  char c, first[3], second[3];
  scanf("%c %s %s", &c, first, second);
  first[0] = change(first[0]);
  second[0] = change(second[0]);
  if ((first[1] == c && second[1] != c) || (first[0] > second[0] && first[1] == second[1])) printf("YES");
  else printf("NO");
  return 0;
}
