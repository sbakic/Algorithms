#include <stdio.h>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;

bool isPrime(int n) {
  if (n == 1) {
    return false;
  }
  int d = 2;
  while (d * d <= n) {
    if (n % d == 0) {
      return false;
    }
    d++;
  }
  return true;
}

bool isPalindrome(int n) {
  if (n <= 100) return false;
  int x = n, size = 0;
  while (x) {
    x /= 10;
    size++;
  }
  int rest = size - 1, divisor = 1;
  for (int i = 0; i < size / 2; i++) {
    if ((int)(n / pow(10, rest)) % 10 != (n / divisor) % 10) return false;
    rest--;
    divisor *= 10;
  }
  return true;
}

bool isAll9(int n) {
  int x = n, size = 0;
  while (x) {
    x /= 10;
    size++;
  }
  for(int i = 0; i < size; i++)  {
    if (n % 10 != 9) {
      return false;
    }
    n /= 10;
  }
  return true;
}

int nextPalindrome(int n) {
  if (n <= 101) return 101;
  if(isAll9(n)) {
    return n + 1;
  }
  stringstream ss;
  ss << n;
  string digits = ss.str();
  int i, j, check = 0, lenght = digits.size(), mid = digits.size() / 2;
      for (i = 0; i < lenght / 2; i++) {
        if (digits[i] < digits[lenght - 1 - i]) {
          check = -1;
        }
        else if (digits[i] > digits[lenght - 1 - i]) {
          check = 1;
        }
        digits[lenght - 1 - i] = digits[i];
      }
  lenght % 2 == 0? j = lenght / 2 - 1: j = lenght / 2;
  if (check == 0 || check == -1) {
    i = 0;
    while(digits[j - i] == '9') {
      digits[j - i] = '0';
      digits[lenght - 1 - j + i] = '0';
      i++;
    }
    digits[j - i]++;
    digits[lenght - 1 - j + i] = digits[j - i];
  }
  return atoi(digits.c_str());
}

int main() {
  int n;
  scanf("%d", &n);
  while(true) {
    if(isPrime(n) && isPalindrome(n)) break;
    n = nextPalindrome(n);
  }
  printf("%d", n);
  return 0;
}
