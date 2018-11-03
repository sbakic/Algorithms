#include <iostream>
#include <algorithm>

using namespace std;

string make(int m, int sum, string large) {
  string small;
  if (large[large.size() - 1] == '0') {
    sum--;
    while (sum) {
      int curr = 0;
      while (sum - curr > 0 && curr < 9) curr++;
      small += curr + '0';
      sum -= curr;
    }
    for (int i = small.size(); i < m - 1; i++) {
      small += "0";
    }
    small += "1";
    reverse(small.begin(), small.end());
  }
  else {
    reverse(large.begin(), large.end());
    small = large;
  }
  return small;
}

int main() {
  int m, sum;
  cin >> m >> sum;
  if ((sum == 0 && m > 1) || (sum * 1. / m > 9)) {
    cout << "-1 -1";
    return 0;
  }
  if (sum == 0 && m == 1) {
    cout << "0 0";
    return 0;
  }
  string small, large;
  for (int i = 0; i < sum / 9; i++) {
    large += "9";
  }
  if (sum % 9 > 0) large += (sum % 9) + '0';
  for (int i = large.size(); i < m; i++) {
    large += "0";
  }
  small = make(m, sum, large);
  cout << small << " " << large;
  return 0;
}
