#include <bits/stdc++.h>

using namespace std;

void printArray(vector<auto> v) {
  for (auto i : v) {
   cout << i << '\n';
  }
}

int main() {
  vector<int> vInt{1, 2, 3};
  vector<string> vString{"Hello", "World"};
  printArray<int>(vInt);
  printArray<string>(vString);
  return 0;
}
