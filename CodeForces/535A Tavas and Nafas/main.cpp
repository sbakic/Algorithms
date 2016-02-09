#include <iostream>
#include <string>

using namespace std;

int main() {
  string a[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  string b[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
  string c[10] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
  int s;
  cin >> s;
  if (s < 10) {
    cout << a[s];
  }
  else if (s < 20 && s >= 10) {
    cout << b[s % 10];
  }
  else {
    if (s % 10 == 0) cout << c[s / 10 - 2];
    else cout << c[s / 10 - 2] << "-" << a[s % 10];
  }
  return 0;
}
