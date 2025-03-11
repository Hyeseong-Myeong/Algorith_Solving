#include <iostream>
#include <algorithm>
using namespace std;

int num;
int stair[301];
int dp[301];

void input() {
	cin >> num;
	for (int i = 1; i <= num; i++) {
		cin >> stair[i];
	}
}

void solve(int num) {
	for (int i = 3; i <= num; i++) {
		dp[i] = max((dp[i - 2] + stair[i]), (dp[i - 3] + stair[i - 1] + stair[i]));
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();

	dp[1] = stair[1];
	dp[2] = stair[2] + stair[1];

	solve(num);

	cout << dp[num] << endl;

	return 0;
}