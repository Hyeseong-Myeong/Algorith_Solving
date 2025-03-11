#include <iostream>
using namespace std;

long long dp[101];

void sol(int n) {
	if (n < 6)
		return;
	else {
		for (int i = 6; i <= n; i++) {
			if (dp[i] != -1) {
				continue;
			}
			else {
				dp[i] = dp[i - 1] + dp[i - 5];
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	fill(dp, dp + size(dp), -1);

	dp[1] = dp[2] = dp[3] = 1;
	dp[4] = dp[5] = 2;
	
	int n, k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n;

		sol(n);
		cout << dp[n] << endl;
	}
}