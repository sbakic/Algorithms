#include <iostream>

using namespace std;

int main() {
  int n, count = 0;
  char c[200000];
  int keys[26][2];
  for (int i = 0; i < 26; i++) {
    keys[i][0] = i;
    keys[i][1] = 0;
  }
  cin >> n;
  for (int i = 0, j = 0; i < 2 * n - 2; i++) {
    cin >> c[i];
    char door = toupper(c[i]);
    char key = tolower(c[i]);
    if (c[i] == door && c[i - 1] != key) {
      if (keys[c[i] - 'A'][1] <= 0) count++;
      else keys[c[i] - 'A'][1]--;
      keys[c[i - 1] - 'a'][1]++;
    }
  }
  cout << count;
  return 0;
}
