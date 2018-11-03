#include <iostream>

using namespace std;

int N = 45;

void make(int a[]) {
  a[0] = 0;
  a[1] = 1;
  for (int i = 2; i < N; i++) {
    a[i] = a[i - 1] + a[i - 2];
  }
}

int main() {
  int n, a[N];
  cin >> n;
  make(a);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < N; k++) {
        if (a[i] + a[j] + a[k] == n) {
          cout << a[i] << " " << a[j] << " " << a[k];
          return 0;
        }
      }
    }
  }
  cout << "I'm too stupid to solve this problem";
  return 0;
}
