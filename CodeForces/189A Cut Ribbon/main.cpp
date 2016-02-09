#include <iostream>

using namespace std;

int find(int a, int b, int c) {
  if (c >= a && a > b && c > b || b >= a && a > c && b > c) return a;
  if (c >= b && b > a && c > a || a >= b && b > c && a > c) return b;
  if (b >= c && c > a && b > a || a >= c && c > b && a > b) return c;
}

int main() {
  int n, a, b, c, maxPieces = 0;
  cin >> n >> a >> b >> c;
  int minN = min(a, min(b, c));
  int midN = find(a, b, c);
  int maxN = max(a, max(b, c));
  for (int i = 0; i <= n / maxN; i++) {
    for (int j = 0; j <= n / midN; j++) {
      int k = (n - i * maxN - j * midN) / minN;
      if (i * maxN + j * midN + k * minN == n) maxPieces = max(maxPieces, i + j + k);
    }
  }
  cout << maxPieces;
  return 0;
}
