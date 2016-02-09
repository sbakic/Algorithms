#include <iostream>

using namespace std;

int main() {
  int t, maxValue = 2000000000, minValue = -2000000000;
  cin >> t;
  while (t--) {
    string s, answer;
    cin >> s;
    int x;
    cin >> x;
    cin >> answer;
    if (answer == "N") {
      if (s == "<") s = ">=";
      else if (s == ">") s = "<=";
      else if (s == "<=") s = ">";
      else if (s == ">=") s = "<";
    }
    if (s == "<") maxValue = min(maxValue, x - 1);
    if (s == ">") minValue = max(minValue, x + 1);
    if (s == "<=") maxValue = min(maxValue, x);
    if (s == ">=") minValue = max(minValue, x);
  }
  if (minValue <= maxValue) {
    cout << minValue;
  }
  else cout << "Impossible";
  return 0;
}
