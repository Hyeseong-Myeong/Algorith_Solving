#include <iostream>
#include <vector>
using namespace std;

int T;
int k, n;

void input() {
	cin >> k >> n;
}

void solve() {
	vector<vector<int>> apartment(k + 1, vector<int>(15));

	for (int i = 0; i < k + 1; i++) {
		for (int j = 1; j < n + 1; j++) {
			if (i == 0) apartment[i][j] = j;
			else if (j == 1) apartment[i][j] = 1;
			else {
				apartment[i][j] = apartment[i - 1][j] + apartment[i][j - 1];
			}
		}
	}

	cout << apartment[k][n] << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> T;
	for (int i = 0; i < T; i++) {
		input();
		solve();
	}
}