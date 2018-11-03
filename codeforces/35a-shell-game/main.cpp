#include <fstream>

using namespace std;

int main() {
  ifstream fin("input.txt");
  ofstream fout("output.txt");
  int cup;
  bool cups[3] = {false, false, false};
  fin >> cup;
  cups[cup - 1] = true;
  for (int i = 0; i < 3; i++) {
    int a, b;
    fin >> a >> b;
    swap(cups[a - 1], cups[b - 1]);
  }
  fin.close();
  for (int i = 0; i < 3; i++) {
    if (cups[i]) fout << i + 1;
  }
  fout.close();
  return 0;
}
