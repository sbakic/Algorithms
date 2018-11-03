#include <string>
#include <fstream>

using namespace std;

int main() {
  int n;
  string s;
  ofstream fout ("output.txt");
  ifstream fin ("input.txt");
  fin >> n >> s;
  fin.close();
  for (int i = 0, j = 0; j < n / 2; j++, i++) {
    if (n - 1 - 2 * i > 4) {
      if (s[i] == 'R' && s[n - 1 - i] == 'L') fout << n - i << " " << i + 1 << '\n';
      else fout << i + 1 << " " << n - i << '\n';
    }
    else {
      if (s[i] == 'R' && s[i + 2] == 'L') fout << i + 3 << " " << i + 1 << '\n';
      else fout << i + 1 << " " << i + 3 << '\n';
      if (s[i + 1] == 'R' && s[i + 3] == 'L') fout << i + 4 << " " << i + 2 << '\n';
      else fout << i + 2 << " " << i + 4 << '\n';
      break;
    }
  }
  fout.close();
  return 0;
}
