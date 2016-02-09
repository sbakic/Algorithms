#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

pair<string, int> a[10000];
pair<string, int> b[10000];

bool sortSecond(const pair<string,int>& firstElement, const pair<string,int>& secondElement) {
  return firstElement.second > secondElement.second;
}

int main() {
  string s, word;
  cin >> s;
  int z = 0, n = s.size();
  for (int i = 0; i < n; i++) {
    word = "";
    word += s[i];
    int firstI = i;
    char letter = (char) ++s[i];
    while  ((char) s[i + 1] == letter) {
      word += s[i + 1];
      i++;
      letter++;
    }
    a[z].first = word;
    a[z].second = i - firstI + 1;
    z++;
  }
  sort(a, a + z, sortSecond);
  int maxL = a[0].second;
  int k = 0;
  for (int i = 0; i < z; i++) {
    if (a[i].second == maxL) {
      b[k].first = a[i].first;
      b[k].second = a[i].second;
      k++;
    }
    else break;
  }
  sort(b, b + k);
  cout << b[0].first;
  return 0;
}
