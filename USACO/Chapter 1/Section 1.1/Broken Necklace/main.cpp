/*
ID: sbakic
PROG: beads
LANG: C++
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ofstream fout ("beads.out");
  ifstream fin ("beads.in");
  int n, maxBeads = 0, current, state;
  string s;
  char c;
  fin >> n >> s;
  s = s + s;
  for (int i = 0; i < n; i++) {
    c = (char) s[i];
    if(c == 'w')
      state = 0;
    else
      state = 1;
    int j = i;
    current = 0;
    while (state < 3) {
      while (j < n + i && (s[j] == c || s[j] == 'w')) {
        current++;
        j++;
      }
      state++;
      c = s[j];
    }
    maxBeads = max(maxBeads, current);
  }
  fout << maxBeads << endl;
  return 0;
}
