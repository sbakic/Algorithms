#include <stdio.h>
#include <utility>
#include <algorithm>

using namespace std;

pair<int, int> pos[100000], neg[100000];

int main() {
  int n, negative = 0, positive = 0, count = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x, a;
    scanf("%d %d", &x, &a);
    if (x < 0) {
      neg[negative].first = x;
      neg[negative++].second = a;
    }
    else {
      pos[positive].first = x;
      pos[positive++].second = a;
    }
  }
  sort(neg, neg + negative, greater<pair<int, int> >());
  sort(pos, pos + positive);
  if (negative == positive) {
    for (int i = 0; i < n / 2; i++) {
      count += pos[i].second + neg[i].second;
    }
  }
  else if(positive > negative) {
    for (int i = 0; i < negative; i++) {
      count += pos[i].second + neg[i].second;
    }
    count += pos[negative].second;
  }
  else if (negative > positive) {
    for (int i = 0; i < positive; i++) {
      count += pos[i].second + neg[i].second;
    }
    count += neg[positive].second;
  }
  printf("%d", count);
  return 0;
}
