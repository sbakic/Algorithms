#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, ans = 0;
  scanf("%d %d", &a, &b);
  for (int i = a; i <= b; i++) {
    int number = i;
    while (number) {
      int digit = number % 10;
      switch (digit) {
        case 0: ans += 6; break;
        case 1: ans += 2; break;
        case 2: ans += 5; break;
        case 3: ans += 5; break;
        case 4: ans += 4; break;
        case 5: ans += 5; break;
        case 6: ans += 6; break;
        case 7: ans += 3; break;
        case 8: ans += 7; break;
        case 9: ans += 6; break;
      }
      number /= 10;
    }
  }
  printf("%d", ans);
  return 0;
}
