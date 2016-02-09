#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
	  deque<pair<int, int>> a;
    int n, k;
		scanf("%d %d", &n, &k);
		for (int i = 0; i < n; i++) {
      int x;
      scanf("%d", &x);
      pair<int, int> p(i, x);
      while (!a.empty() && x > a.back().second) a.pop_back();
      a.push_back(p);
      if (i >= k && a.front().first == i - k) a.pop_front();
      if (i + 1 >= k) printf(i < n - 1 ? "%d " : "%d\n", a.front().second);
		}
	}
  return 0;
}
