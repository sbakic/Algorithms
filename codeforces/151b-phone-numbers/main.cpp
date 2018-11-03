#include <iostream>

using namespace std;

int main() {
  int n, taxi = 0, pizza = 0, girls = 0, countTaxi = 0, countPizza = 0, countGirls = 0;
  pair<pair<string, int>, pair<int, int>> s[100] = {};
  cin >> n;
  for (int i = 0; i < n; i++) {
    int k, a, b, c;
    char c1, c2;
    cin >> k >> s[i].first.first;
    for (int j = 0; j < k; j++) {
      cin >> a >> c1 >> b >> c2 >> c;
      if (a / 10 == a % 10 && a % 10 == b / 10 && b / 10 == b % 10 && b % 10 == c / 10 && c / 10 == c % 10) s[i].first.second++;
      else if (a / 10 > a % 10 && a % 10 > b / 10 && b / 10 > b % 10 && b % 10 > c / 10 && c / 10 > c % 10) s[i].second.first++;
      else s[i].second.second++;
    }
    taxi = max(taxi, s[i].first.second);
    pizza = max(pizza, s[i].second.first);
    girls = max(girls, s[i].second.second);
  }
  for (int i = 0; i < n; i++) {
    if (s[i].first.second == taxi) countTaxi++;
    if (s[i].second.first == pizza) countPizza++;
    if (s[i].second.second == girls) countGirls++;
  }
  cout << "If you want to call a taxi, you should call: ";
  for (int i = 0; i < n; i++) {
    if (s[i].first.second == taxi) {
      if (countTaxi-- - 1 > 0) cout << s[i].first.first << ", ";
      else cout << s[i].first.first << ".\n";
    }
  }
  cout << "If you want to order a pizza, you should call: ";
  for (int i = 0; i < n; i++) {
     if (s[i].second.first == pizza) {
      if (countPizza-- - 1 > 0) cout << s[i].first.first << ", ";
      else cout << s[i].first.first << ".\n";
    }
  }
  cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
  for (int i = 0; i < n; i++) {
    if (s[i].second.second == girls) {
      if (countGirls-- - 1 > 0) cout << s[i].first.first << ", ";
      else cout << s[i].first.first << ".\n";
    }
  }
  return 0;
}
