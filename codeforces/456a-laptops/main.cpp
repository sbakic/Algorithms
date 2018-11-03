#include <stdio.h>
#include <algorithm>

using namespace std;

class Laptop{
public:
  int price, quality;
};

bool value(Laptop const & a, Laptop const & b){
    return a.price < b.price;
}

int main() {
  int n;
  Laptop a[100001];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a[i].price, &a[i].quality);
  }
  sort(a, a + n, value);
  for (int i = 0; i < n - 1; i++) {
    if (a[i].quality > a[i + 1].quality) {
      printf("Happy Alex");
      return 0;
    }
  }
  printf("Poor Alex");
  return 0;
}
