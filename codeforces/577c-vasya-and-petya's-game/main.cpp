#include <iostream>

using namespace std;

int factorization(int n) {
  int i = 2, count = 0;
  while (i * i <= n) {
    if (n % i == 0) {
      count++;
      while (n % i == 0) {
        n /= i;
      }
    }
    i++;
  }
  if (n > 1) count++;
  return count;
}

int main(){
  int n, a[1000], count = 0;
  cin >> n;
  for (int i = 2; i <= n; i++) {
    if (factorization(i) == 1) a[count++] = i;
  }
  cout << count << '\n';
  for (int i = 0; i < count; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
