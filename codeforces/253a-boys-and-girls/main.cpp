#include <bits/stdc++.h>

using namespace std;

int main() {
  ifstream fin("input.txt");
  ofstream fout("output.txt");

  int n, m;
  fin >> n >> m;
  for (int i = 1; i <= max(m, n); i++) {
    if (n > m) {
      if (i <= n) fout << "B";
      if (i <= m) fout << "G";
    }
    else {
      if (i <= m) fout << "G";
      if (i <= n) fout << "B";
    }
  }
  return 0;
}
