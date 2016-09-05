#include <bits/stdc++.h>

using namespace std;

int N = 4, M = 3;

inline pair<int, int> sub_pair(pair<int, int> a, pair<int, int> b) {
  return make_pair(a.first - b.first, a.second - b.second);
}

pair<int, int> find_digit(int a[][3], int d) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (a[i][j] == d)
        return make_pair(i, j);
    }
  }
  return make_pair(-1, -1);
}

int main() {
  vector<pair<int, int>> v;
  string s;
  int n, a[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, -1, 0, -1};
  cin >> n >> s;
  for (int i = 1; i < n; i++) {
    v.push_back(sub_pair(find_digit(a, s[i] - '0'), find_digit(a, s[i - 1] - '0')));
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (a[i][j] == s[0] - '0' || a[i][j] == -1) continue;
      int I = i, J = j;
      for (int i = 0; i < (int) v.size(); i++) {
        I += v[i].first;
        J += v[i].second;
        if (!(I >= 0 && I < N && J >= 0 && J < M && ((I != 3 || J != 0) && (I != 3 || J != 2)))) break;
      }
      if (I >= 0 && I < N && J >= 0 && J < M && ((I != 3 || J != 0) && (I != 3 || J != 2))) {
          cout << "NO";
          return 0;
        }
    }
  }
  cout << "YES";
  return 0;
}
