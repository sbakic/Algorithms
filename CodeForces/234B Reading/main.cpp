#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main() {
  ofstream fout ("output.txt");
  ifstream fin ("input.txt");
  pair<int, int> a[1000];
  int n, k;
  fin >> n >> k;
  for (int i = 0; i < n; i++) {
    fin >> a[i].first;
    a[i].second = i + 1;
  }
  fin.close();
  sort(a, a + n, greater<pair<int, int>>());
  fout << a[k - 1].first << '\n';
  for (int i = 0; i < k; i++) {
    fout << a[i].second << " ";
  }
  fout.close();
  return 0;
}
