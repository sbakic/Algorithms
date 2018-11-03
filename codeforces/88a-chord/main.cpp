#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

bool checkMajor(int x, int y, int z) {
  int xy, yz, xz;
  if (x - y < 0) xy = abs(x - y);
  else xy = 12 - x + y;
  if (y - z < 0) yz = abs(y - z);
  else yz = 12 - y + z;
  if (x - z < 0) xz = abs(x - z);
  else xz = 12 - x + z;
  return xy == 4 && yz == 3 && xz == 7;
}

bool testMajor(int x, int y, int z) {
  if (checkMajor(x, y, z)) return true;
  if (checkMajor(x, z, y)) return true;
  if (checkMajor(y, x, z)) return true;
  if (checkMajor(y, z, x)) return true;
  if (checkMajor(z, x, y)) return true;
  if (checkMajor(z, y, x)) return true;
  return false;
}

bool checkMinor(int x, int y, int z) {
  int xy, yz, xz;
  if (x - y < 0) xy = abs(x - y);
  else xy = 12 - x + y;
  if (y - z < 0) yz = abs(y - z);
  else yz = 12 - y + z;
  if (x - z < 0) xz = abs(x - z);
  else xz = 12 - x + z;
  return xy == 3 && yz == 4 && xz == 7;
}

bool testMinor(int x, int y, int z) {
  if (checkMinor(x, y, z)) return true;
  if (checkMinor(x, z, y)) return true;
  if (checkMinor(y, x, z)) return true;
  if (checkMinor(y, z, x)) return true;
  if (checkMinor(z, x, y)) return true;
  if (checkMinor(z, y, x)) return true;
  return false;
}

int make(string x, string notes[]) {
  for (int i = 0; i < 12; i++) {
    if (x == notes[i]) return i + 1;
  }
}

int main() {
  string notes[12] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};
  string first, second, third;
  cin >> first >> second >> third;
  int x = make(first, notes), y = make(second, notes), z = make(third, notes);
  if (testMajor(x, y, z)) cout << "major";
  else if (testMinor(x, y, z)) cout << "minor";
  else cout << "strange";
  return 0;
}
