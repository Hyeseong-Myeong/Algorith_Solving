#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int a, b;
	
	a = w - x;
	b = h - y;
	if (x < a) a = x;
	if (y < b) b = y;

	if (a >= b) {
		cout << b;
		return 0;
	}
	else
		cout << a;

	return 0;
}