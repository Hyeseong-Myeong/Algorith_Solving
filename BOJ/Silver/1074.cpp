#include <iostream>
#include <cmath>
using namespace std;

int n, r, c;
int ret = 0;

void recursive(int size, int x, int y) {
	if (x == c && y == r) {
		cout << ret << endl;
		return;
	}

	if (r < y + size && r >= y && c < x + size && c >= x) {
		recursive(size / 2, x, y);
		recursive(size / 2, x + size / 2, y);
		recursive(size / 2, x, y + size / 2);
		recursive(size / 2, x + size / 2, y + size / 2);
	}
	else {
		ret = ret + pow(size,2);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> n >> r >> c;

	recursive(pow(2, n) , 0, 0);

	return 0;
}