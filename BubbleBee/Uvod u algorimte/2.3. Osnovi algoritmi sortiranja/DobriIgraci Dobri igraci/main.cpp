#include <stdio.h>
#include <algorithm>

using namespace std;

class Points{
public:
  int numberOne, numberTwo;
};

bool valueOne(Points const & a, Points const & b){
  return a.numberOne < b.numberOne;
}

void mySort(Points a[], int n) {
  int z = 0, count, start, end;
  while (z < n) {
    count = 0;
    start = z;
    while (a[z].numberOne == a[z + 1].numberOne) {
      count++;
      z++;
    }
    end = start + count;
    for (int i = start; i <= end; i++) {
      int min = i;
      for (int j = i + 1; j <= end; j++) {
        if (a[min].numberTwo > a[j].numberTwo) {
          min = j;
        }
      }
      swap(a[i].numberTwo, a[min].numberTwo);
    }
    z++;
  }
}

Points a[100001];

int main() {
  int n, count = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a[i].numberOne, &a[i].numberTwo);
  }
  sort(a, a + n, valueOne);
  mySort(a, n);
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i].numberTwo < a[j].numberTwo) {
        count++;
        break;
      }
      if (a[i].numberOne == a[j].numberOne && a[i].numberTwo == a[j].numberTwo) {
        count += 2;
        i++;
        break;
      }
    }
  }
  printf("%d", n - count);
  return 0;
}
