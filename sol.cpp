#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	// n steps
	// 1 or 2 steps at each move
	// let x = no. of 1 step, y = no. of 2 steps
	// x + 2y = n
	// (x + y) should be divisible by m or determine that it is impossible
	int mn = INT_MAX;
	for (int x = 0; x <= n; x++) {
		for (int y = 0; y <= n; y++) {
			int moves = x + y;
			if (x + (2 * y) == n && moves % m == 0) {
				mn = min(mn, moves);
			}
		}
	}
	cout << (mn != INT_MAX ? mn : -1) << '\n';
	return 0;
}
