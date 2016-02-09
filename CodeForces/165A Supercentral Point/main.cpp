#include <iostream>

using namespace std;

int main() {
  pair<int, int> a[200];
  int n, count = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }
  for (int i = 0; i < n; i++) {
    bool right = false, left = false, up = false, down = false;
    for (int j = 0; j < n; j++) {
      if (a[i].first < a[j].first && a[i].second == a[j].second) right = true;
      if (a[i].first > a[j].first && a[i].second == a[j].second) left = true;
      if (a[i].first == a[j].first && a[i].second < a[j].second) up = true;
      if (a[i].first == a[j].first && a[i].second > a[j].second) down = true;
    }
    if (right && left && up && down) count++;
  }
  cout << count;
  return 0;
}
