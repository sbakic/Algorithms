#include <bits/stdc++.h>

using namespace std;

class Difference {
private:
  vector<int> elements;

public:
  int maximumDifference;

	Difference(vector<int> elements) {
    this->elements = elements;
  }

  void computeDifference() {
    int ans = 0;
    for (int i = 0; i < (int) elements.size() - 1; i++) {
      for (int j = i + 1; j < (int) elements.size(); j++) {
        ans = max(ans, abs(elements[i] - elements[j]));
      }
    }
    maximumDifference = ans;
  }
};

int main() {
  int N;
  cin >> N;
  vector<int> a;
  for (int i = 0; i < N; i++) {
    int e;
    cin >> e;
    a.push_back(e);
  }
  Difference d(a);
  d.computeDifference();
  cout << d.maximumDifference;
  return 0;
}
