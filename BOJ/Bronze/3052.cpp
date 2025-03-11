#include <iostream>
using namespace std;

int result[42] = { 0, };
int num[10];
int ret = 0;

void input() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
}

void solve() {
	for (int i = 0; i < 10; i++) {
		result[num[i] % 42]++;
	}

	for (int i = 0; i < 42; i++) {
		if (result[i] != 0)
			ret++;
	}
}

int main() {
	input();
	solve();
	cout << ret << '\n';
}