#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	// upper bound (maximum no. of moves) = n
	// lower bound (minimum no. of moves) = ceil(n / 2)
	// multiple of m must be within the range [n / 2, n]
	// we need to find the smallest integer that is 
	// a multiple of m within the range [n / 2, n]
	// one way to find the answer:
	// ceil(x / m) * m, or (x + m - 1) / m * n
	int lower_bound = (n + 1) / 2;
	int ans = (lower_bound + m - 1) / m * m;
	if (ans > n) {
		ans = -1;
	}
	cout << ans << '\n';
	return 0;
}
