#include <stdio.h>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  string name, s[3] = {"APOR", "BMS", "DGJKTW"};
  int n, count = 0, position[2], size[3] = {4, 3, 6};
  scanf("%d", &n);
  position[0] = 0;
  while (n--) {
    bool found = false;
    cin >> name;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < size[i]; j++) {
        if(name[0] == s[i][j]) {
          position[1] = i;
          found = true;
          break;
        }
      }
      if (found) {
        break;
      }
    }
    count += abs(position[1] - position[0]);
    position[0] = position[1];
  }
  printf("%d", count);
  return 0;
}
