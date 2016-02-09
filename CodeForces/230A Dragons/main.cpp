#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  pair<int, int> dragons[1000];
  int s, n;
  cin >> s >> n;
  for (int i = 0; i < n; i++) {
    cin >> dragons[i].first >> dragons[i].second;
  }
  sort(dragons, dragons + n);
  for (int i = 0; i < n; i++) {
    if (s > dragons[i].first) s += dragons[i].second;
    else {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}
