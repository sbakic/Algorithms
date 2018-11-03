#include <bits/stdc++.h>

using namespace std;

bool check(int a[]) {
  for (int i = 1; i < 10; i++) {
    if (a[i] > 0) return true;
  }
  return false;
}

int main() {
  int n, a[10] = {}, sum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    a[x]++;
    sum += x;
  }
  if (a[0] > 0) {
    if (sum % 3 != 0) {
      int curr = sum % 3, one[] = {1, 4, 7}, two[] = {2, 5, 8}, count = 2;
      if (curr == 1) {
        for (int i = 0; i < 3; i++) {
          if (a[one[i]] > 0) {
            a[one[i]]--;
            sum -= one[i];
            break;
          }
        }
        if (sum % 3 == curr) {
          for (int i = 0; i < 3; i++) {
            if (a[two[i]] > 1) {
              a[two[i]] -= 2;
              sum -= 2 * two[i];
              break;
            }
          }
          if (sum % 3 == curr) {
            for (int i = 0; i < 3; i++) {
              if (a[two[i]] > 0 && count > 0) {
                a[two[i]]--;
                count--;
                sum -= two[i];
              }
            }
          }
        }
      }
      else if (curr == 2) {
        for (int i = 0; i < 3; i++) {
          if (a[two[i]] > 0) {
            a[two[i]]--;
            sum -= two[i];
            break;
          }
        }
        if (sum % 3 == curr) {
          for (int i = 0; i < 3; i++) {
            if (a[one[i]] > 1) {
              a[one[i]] -= 2;
              sum -= 2 * one[i];
              break;
            }
          }
          if (sum % 3 == curr) {
            for (int i = 0; i < 3; i++) {
              if (a[one[i]] > 0 && count > 0) {
                a[one[i]]--;
                count--;
                sum -= one[i];
              }
            }
          }
        }
      }
    }
    if (sum % 3 != 0) {
      cout << "0";
      return 0;
    }
    if (!check(a)) a[0] = 1;
    for (int i = 9; i >= 0; i--) {
      if (a[i] > 0) {
        while (a[i]--) {
          printf("%d", i);
        }
      }
    }
  }
  else printf("-1");
  return 0;
}
