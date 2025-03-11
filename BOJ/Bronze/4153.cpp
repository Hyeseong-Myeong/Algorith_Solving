#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int tr[3];

	while (1) {
		cin >> tr[0] >> tr[1] >> tr[2];
		sort(tr, tr + 3);
		if (tr[0] == 0 && tr[1] == 0 && tr[2] == 0) {
			return 0;
		}
		else {
			if (pow(tr[0], 2) + pow(tr[1], 2) == pow(tr[2], 2)) {
				cout << "right" << endl;
			}
			else {
				cout << "wrong" << endl;
			}
		}
	}
}