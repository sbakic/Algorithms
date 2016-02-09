#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  if (a == 0 && b == 0 && c == 0) {
    printf("-1");
    return 0;
  }
  if (c != 0 && a == 0 && b == 0 || b * b - 4 * a * c < 0) {
    printf("0");
    return 0;
  }
  if (a == 0) {
    printf("1\n%lf", -c / b);
    return 0;
  }
  double root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
  double root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
  if (root1 == root2) {
    printf("1\n%lf", root1);
  }
  else {
    printf("2\n%.10lf\n%.10lf", min(root1, root2), max(root1, root2));
  }
  return 0;
}
