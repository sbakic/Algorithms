#include <bits/stdc++.h>

using namespace std;

class Matrix{
  public:
    vector<vector<int>> a;
};

Matrix operator + (Matrix x, Matrix y) {
  Matrix result;
  for (int i = 0; i < x.a.size(); i++) {
    vector<int> a;
    for (int j = 0; j < x.a[i].size(); j++) {
      a.push_back(x.a[i][j] + y.a[i][j]);
    }
    result.a.push_back(a);
  }
  return result;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    Matrix x, y, result;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
      vector<int> b;
      for (int j = 0; j < m; j++) {
        int num;
        cin >> num;
        b.push_back(num);
      }
      x.a.push_back(b);
    }
    for (int i = 0; i < n; i++) {
      vector<int> b;
      for (int j = 0; j < m; j++) {
        int num;
        cin >> num;
        b.push_back(num);
      }
      y.a.push_back(b);
    }
    result = x + y;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cout << result.a[i][j] << " ";
      }
      cout << '\n';
    }
  }
  return 0;
}
