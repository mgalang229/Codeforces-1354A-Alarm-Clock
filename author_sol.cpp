#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long a, b, c, d;
		cin >> a >> b >> c >> d;
		// view the image and explanation in this repository for better understanding
		if (b >= a) {
			// if 'b' is greater than or equal to 'a', then print 'b' itself
			cout << b << '\n';
			continue;
		}
		if (d >= c) {
			// if 'd' is greater than or equal to 'c', then print -1
			cout << -1 << '\n';
			continue;
		}
		// view the image in this repository for derivation of formula
		long long numerator = a - b;
		long long denominator = c - d;
		long long x = (numerator + denominator - 1) / denominator;
		cout << b + (x * c) << '\n';
	}
	return 0;
}
