#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> dp;

void sq(int num) {
	for (int i = 1; i <= num; i++) {
		dp[i] = dp[1] + dp[i - 1];
		for (int j = 2; j * j <= i; j++) {
			if ((1 + dp[i - j * j]) < dp[i])
				dp[i] = 1 + dp[i - j * j];
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	dp.resize(50001);
	int n;

	cin >> n;
	fill(dp.begin(), dp.end(), -1);

	dp[1] = 1;
	dp[0] = 0;
	sq(n);
	cout << dp[n];
	

}