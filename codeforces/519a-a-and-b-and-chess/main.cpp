#include <iostream>
#include <string>

using namespace std;

int white = 0, black = 0;

void weight(char c) {
  switch (c) {
  case 'q': black += 9; break;
  case 'Q': white += 9; break;
  case 'r': black += 5; break;
  case 'R': white += 5; break;
  case 'b': case 'n': black += 3; break;
  case 'B': case 'N': white += 3; break;
  case 'p': black++; break;
  case 'P': white++; break;
  }
}

int main() {
  string s[8];
  for (int i = 0; i < 8; i++) {
    cin >> s[i];
  }
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      weight(s[i][j]);
    }
  }
  if (white == black) {
    cout << "Draw";
    return 0;
  }
  white > black? cout << "White": cout << "Black";
  return 0;
}
