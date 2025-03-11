#include <iostream>
using namespace std;

int num;

int solve(int num) {
	int n = 1;
	int range_max = 1;
	while (range_max < num) {
		range_max += 6 * n;
		n++;
	}
	return n;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> num;
	cout << solve(num) << '\n';

	return 0;
}