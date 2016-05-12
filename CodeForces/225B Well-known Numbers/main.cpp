#include <bits/stdc++.h>

using namespace std;

int main() {
  int s, k, i = 1, V[5001] = {};;
  cin >> s >> k;
  V[0] = V[1] =1;
  while (V[i] <= s) {
    i++;
    V[i] = 2 * V[i - 1] - (i < (k + 1) ? 0 : V[i - k - 1]);
  }
  vector<int> ans;
  for (int j = i - 1 ; j >= 0;j--) {
    if (s - V[j] >= 0) {
      ans.push_back(V[j]);
      s -= V[j];
    }
    if (s == 0) break;
  }
  ans.push_back(0);
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  return 0;
}
