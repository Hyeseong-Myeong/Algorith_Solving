#include <iostream>
#include <vector>
using namespace std;

int n, k;
int coinNum = 0;
vector <int> money;

void input() {
	for (int i = 0; i < n; i++) {
		int coin;
		cin >> coin;
		money.push_back(coin);
	}
}

void solve() {
	for (int i = 0; i < money.size(); i++) {
		int measure = money[money.size() - i - 1];
		if (k / measure) {
			coinNum = coinNum + k / measure;
			k = k % measure;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> n >> k;
	input();
	solve();

	cout << coinNum << '\n';
}