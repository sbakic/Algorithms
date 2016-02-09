#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) {
  vector<int> numbers;
  stringstream ss(str);
  int temp;
  while (ss >> temp) {
    numbers.push_back(temp);
    if (ss.peek() == ',') ss.ignore();
  }
  return numbers;
}

int main() {
  string str;
  cin >> str;
  vector<int> integers = parseInts(str);
  for(int i = 0; i < integers.size(); i++) {
    cout << integers[i] << "\n";
  }
  return 0;
}
