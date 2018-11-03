#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  if(max(3 * a / 10, a - a / 250 * c) == max(3 * b / 10, b - b / 250 * d)) {
    printf("Tie");
    return 0;
  }
  max(3 * a / 10, a - a / 250 * c) > max(3 * b / 10, b - b / 250 * d)?printf("Misha"): printf("Vasya");
  return 0;
}
