#include <bits/stdc++.h>

using namespace std;

class Student{
  public:
    int total;
    void Input() {
      int a, b, c, d, e;
      cin >> a >> b >> c >> d >> e;
      total = a + b + c + d + e;
    }
    int CalculateTotalScore(){
      return total;
    }
};

int main() {
  int n, count = 0;
  cin >> n;
  Student s[n];
  for (int i = 0; i < n; i++) {
    s[i].Input();
  }
  int krish_score=s[0].CalculateTotalScore();
  for (int i = 1; i < n; i++) {
    int total = s[i].CalculateTotalScore();
    if (total > krish_score) count++;
  }
  cout << count;
  return 0;
}
