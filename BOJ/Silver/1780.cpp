#include <iostream>
using namespace std;

int n;
int paper[2187][2187];
int Num[3] = { 0, };

void input() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> paper[i][j];
		}
	}
}
bool numcheck(int size, int x, int y) {
	int temp = paper[x][y];
	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			if (temp != paper[i][j])
				return false;
		}
	}
	return true;
}
void recursive(int size, int x, int y) {
	if (size == 1) {
		Num[paper[x][y] + 1]++;
		return;
	}

	if (numcheck(size, x, y)) {
		Num[paper[x][y] + 1]++;
		return;
	}
	else {
		recursive(size / 3, x, y);
		recursive(size / 3, x + size / 3, y);
		recursive(size / 3, x + 2 * size / 3, y);
		recursive(size / 3, x, y + size / 3);
		recursive(size / 3, x + size / 3, y + size / 3);
		recursive(size / 3, x + 2 * size / 3, y + size / 3);
		recursive(size / 3, x, y + 2 * size / 3);
		recursive(size / 3, x + size / 3, y + 2 * size / 3);
		recursive(size / 3, x + 2 * size / 3, y + 2 * size / 3);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> n;
	input();

	recursive(n, 0, 0);
	cout << Num[0] << endl << Num[1] << endl << Num[2] << endl;
}