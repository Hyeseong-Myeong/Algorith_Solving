#include <iostream>
using namespace std;

int dp[11] = { -1, };

int solve(int n) {
	if (n < 4)
		return dp[n];
	else {
		for (int i = 4; i <=n; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
	}
	return dp[n];
}

int main() {
	int T, N;//num of testcase, testcase
	cin >> T;
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 0; i < T; i++) {
		cin >> N;
		cout << solve(N) << endl;
	}
}