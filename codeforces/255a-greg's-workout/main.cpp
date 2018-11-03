#include <iostream>

using namespace std;

int main() {
  int n, a, chest = 0, biceps = 0, back = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (i % 3 == 0) chest += a;
    if (i % 3 == 1) biceps += a;
    if (i % 3 == 2) back += a;
  }
  if (chest > max(biceps, back)) cout << "chest";
  if (biceps > max(chest, back)) cout << "biceps";
  if (back > max(chest, biceps)) cout << "back";
  return 0;
}
