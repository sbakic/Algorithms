/*
ID: sbakic
PROG: milk
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  ofstream fout ("milk.out");
  ifstream fin ("milk.in");
  pair<int, int> farmers[5001];
  int m;
  long long n, total = 0;
  fin >> n >> m;
  for (int i = 0; i < m; i++) {
    fin >> farmers[i].first >> farmers[i].second;
  }
  sort(farmers, farmers + m);
  for (int i = 0; i < m; i++) {
    long long price = (long long) farmers[i].first * farmers[i].second;
    if (farmers[i].second < n) {
      n -= farmers[i].second;
      total += price;
    }
    else {
      total += n * farmers[i].first;
      break;
    }
  }
  fout << total << endl;
  return 0;
}
