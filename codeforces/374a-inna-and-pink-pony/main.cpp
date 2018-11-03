#include<iostream>

using namespace std;

long long INF = 1LL << 60;

long long solve(long long n, long long m, long long i, long long j, long long a, long long b) {
	if (i % a != 0 || j % b != 0) return INF;
	if (1 + a > n || 1 + b > m) {
		if (i != 0 || j != 0) return INF;
	}
	long long k1 = i / a, k2 = j / b;
	if ((k1 % 2 == 1 && k2 % 2 == 0) || (k1 % 2 == 0 && k2 % 2 == 1)) return INF;
	return max(k1, k2);
}

int main() {
  long long n, m, i, j, a ,b;
	cin >> n >> m >> i >> j >> a >> b;
	long long ans = min(min(solve(n, m, i - 1, j - 1,a , b), solve(n, m, n - i, j - 1, a ,b)), min(solve(n, m, i - 1, m - j, a, b), solve(n, m, n - i, m - j, a, b)));
	if (ans == INF) cout << "Poor Inna and pony!";
  else cout << ans;
	return 0;
}
