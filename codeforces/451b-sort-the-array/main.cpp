#include <iostream>

using namespace std;

int main() {
  int n, a[100000];
  bool check = true;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int start = 0, end = n;
  for (int i = 0; i < n; i++) {
    if (a[i] > a[i + 1]) {
      start = i;
      while (a[i] > a[i + 1]) i++;
      end = i + 1;
      break;
    }
  }
  if (end > n) end = n;
  for (int i = start; i < (start + end) / 2; i++) {
    swap(a[i], a[start + end - 1 - i]);
  }
  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      cout << "no";
      return 0;
    }
  }
  cout << "yes\n" << start + 1 << " " << end;
  return 0;
}
