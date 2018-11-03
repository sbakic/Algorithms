#include <iostream>

using namespace std;

pair<string, int> languageOne[3000], languageTwo[3000];

int main() {
  string s[3000];
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> languageOne[i].first >> languageTwo[i].first;
    languageOne[i].second = languageOne[i].first.size();
    languageTwo[i].second = languageTwo[i].first.size();
  }
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (s[i] == languageOne[j].first) {
        languageOne[j].second > languageTwo[j].second ? cout << languageTwo[j].first << " " : cout << languageOne[j].first << " ";
        break;
      }
    }
  }
  return 0;
}
