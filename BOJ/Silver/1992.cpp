#include <iostream>
#include <string>
using namespace std;

//qt to string
void qtst(int x, int y, int length, int** qt) {
	if (length == 1) {
		cout << qt[x][y];
		return;
	}

	bool oneOnly, zeroOnly;
	oneOnly = zeroOnly = true;

	for (int i = x; i < x + length; i++) {
		for (int j = y; j < y + length; j++) {
			if (qt[i][j] == 0)
				oneOnly = false;
			else if (qt[i][j] == 1)
				zeroOnly = false;
		}
	}
	if (oneOnly == true) {
		cout << 1;
		return;
	}
	else if (zeroOnly == true) {
		cout << 0;
		return;
	}

	cout << "(";
	qtst(x, y, (length / 2), qt);
	qtst(x, y + (length / 2), (length / 2), qt);
	qtst(x + (length / 2), y, length / 2, qt);
	qtst(x + (length / 2), y + (length / 2), (length / 2), qt);
	cout << ")";

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	//overflow
	int n;
	cin >> n;

	//dynamic qt and input qt
	int** qt = new int* [n];
	for (int i = 0; i < n; i++) {
		qt[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		string low;
		cin >> low;
		
		for (int j = 0; j < n; j++) {
			qt[i][j] = (int)low[j] - 48;
		}
	}
	/*
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << qt[i][j];
		}
		cout << '\n';
	}
	*/
	qtst(0, 0, n, qt);

	delete[]qt;
}