#include <iostream>
#include <vector>
using namespace std;

int n;
vector <int> dp;

int solve() {
	for (int i = 3; i < n + 1; i++) {
		dp[i] = (dp[i - 1] + (dp[i - 2] * 2)) % 10007;
	}
	return dp[n];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> n;
	dp.resize(n + 1);
	dp[1] = 1;
	dp[2] = 3;

	cout << solve() << '\n';

	return 0;
}