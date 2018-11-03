#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string first[2] = {"O-|", "-O|"};
  string second[5] = {"-OOOO\n", "O-OOO\n", "OO-OO\n", "OOO-O\n", "OOOO-\n"};
  cin >> n;
  if (n == 0) {
    cout << "O-|-OOOO\n";
    return 0;
  }
  while (n) {
    cout << first[(n % 10 ) / 5] ;
    cout << second[(n % 10) >= 5 ? n % 10 - 5 : n % 10];
    n /= 10;
  }
  return 0;
}
