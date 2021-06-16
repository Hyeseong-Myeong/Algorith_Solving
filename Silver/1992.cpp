#include <iostream>
#include <string>
using namespace std;

//qt to string
void qtst(int x, int y, int length, string &list, int** qt) {
	if (length <= 2) {
		if (qt[x][y] == qt[x][y + 1] && qt[x][y + 1] == qt[x + 1][y] && qt[x + 1][y] == qt[x + 1][y + 1]) {
			cout << qt[x][y];
		}
		else {
			cout << "(" << qt[x][y] << qt[x][y + 1] << qt[x + 1][y] << qt[x + 1][y + 1] << ")";
		}
	}
	else {
		cout << "(";
		qtst(x, y, (length / 2), list, qt);
		qtst(x + (length / 2), y, length / 2, list, qt);
		qtst(x, y + (length / 2), (length / 2), list, qt);
		qtst(x + (length / 2), y + (length / 2), (length / 2), list, qt);
		cout << ")";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int n;
	cin >> n;

	//dynamic qt and input qt
	int** qt = new int* [n];
	for (int i = 0; i < n; i++) {
		qt[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		int low;
		cin >> low;
		
		for (int j = n - 1; j >= 0; j--) {
			qt[i][j] = low % 10;
			low /= 10;
		}
	}
	string list = "";

	qtst(0, 0, n, list, qt);

	cout << list;

	delete[]qt;
}