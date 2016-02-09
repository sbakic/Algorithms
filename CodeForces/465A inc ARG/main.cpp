#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
  int n, a[101], check = 0;
  string bits;
  scanf("%d", &n);
  cin >> bits;
  int length = bits.size();
  for (int i = 0; i < length; i++) {
    a[i] = bits[i] - '0';
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == 1) check++;
    if (a[i] == 0) {
      check++;
      break;
    }
  }
  printf("%d", check);
  return 0;
}
