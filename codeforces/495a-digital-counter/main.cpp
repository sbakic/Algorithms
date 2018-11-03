#include <stdio.h>

int good(int n) {
  switch (n) {
    case 0: return 2; break; // 0 -> 0, 8
    case 1: return 7; break; // 1 -> 0, 1, 3, 4, 7, 8, 9
    case 2: return 2; break; // 2 -> 2, 8
    case 3: return 3; break; // 3 -> 3, 8, 9
    case 4: return 3; break; // 4 -> 4, 8, 9
    case 5: return 4; break; // 5 -> 5, 6, 8, 9
    case 6: return 2; break; // 6 -> 6, 8
    case 7: return 5; break; // 7 -> 0, 3, 7, 8, 9
    case 8: return 1; break; // 8 -> 8
    case 9: return 2; break; // 9 -> 8, 9
    }
    return 0;
}

int main(){
  int n, first, second;
  scanf("%d", &n);
  first = good(n % 10);
  second = good((n / 10) % 10);
  printf("%d", first * second);

  return 0;
}
