#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
  pair<char, int> a[26], b[26];
  for (char c = 'a', i = 0; i < 26; i++, c++) {
    a[i].first = b[i].first = c;
    a[i].second = b[i].second = 0;
  }
  string s1, s2;
  cin >> s1 >> s2;
  int n1 = s1.size(), n2 = s2.size();
  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < 26; j++) {
      if (s1[i] == a[j].first) a[j].second++;
    }
  }
  for (int i = 0; i < n2; i++) {
    for (int j = 0; j < 26; j++) {
      if (s2[i] == b[j].first) b[j].second++;
    }
  }
  int count = 0;
  for (int i = 0; i < 26; i++) {
    count += abs(a[i].second - b[i].second);
  }
  cout << count;
  return 0;
}
