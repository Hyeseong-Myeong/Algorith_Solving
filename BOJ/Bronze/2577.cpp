#include <iostream>
using namespace std;

int result[10] = { 0, };
unsigned long num;
unsigned long a, b, c;

void input() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> a >> b >> c;
	num = a * b * c;
	return;
}

void solve() {
	while (num != 0) {
		result[num % 10]++;
		num /= 10;
	}
	return;
}

int main() {
	input();
	solve();
	for (int i = 0; i < 10; i++) {
		cout << result[i] << '\n';
	}
	return 0;
}