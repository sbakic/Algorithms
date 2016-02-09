#include <iostream>
#include <string>

using namespace std;

int main() {
  string s[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  int n;
  cin >> n;
  n < 10 ? cout << s[n] : cout << "Greater than 9";
  return 0;
}
