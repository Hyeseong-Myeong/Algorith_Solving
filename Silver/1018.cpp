#include <iostream>
using namespace std;


int CH[50][50];

int checkW(int n, int m) {
	int count = 0;
	for (int i = n; i < n + 8; i++) {
		for (int j = m; j < m + 8; j++) {
			if ((i + j) % 2 == 0) {
				if (CH[i][j] == 0)
					continue;
				else
					count++;
			}
			else {
				if (CH[i][j] == 1)
					continue;
				else
					count++;
			}
		}
	}
	return count;
}

int checkB(int n, int m) {
	int count = 0;
	for (int i = n; i < n + 8; i++) {
		for (int j = m; j < m + 8; j++) {
			if ((i + j) % 2 == 0) {
				if (CH[i][j] == 1)
					continue;
				else
					count++;
			}
			else {
				if (CH[i][j] == 0)
					continue;
				else
					count++;
			}
		}
	}
	return count;
}

int main() {
	int N, M;
	int min = 64;
	char WB;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> WB;

			if (WB == 'W')
				CH[i][j] = 0;
			else
				CH[i][j] = 1;
		}
	}
	
	for (int k = 0; k < N - 7; k++) {
		for (int q = 0; q < M - 7; q++) {
			int calc;

			calc = checkB(k, q);
			if (calc < min)
				min = calc;
			
			calc = checkW(k, q);
			if (calc < min)
				min = calc;
		}
	}
	

	cout << min;
}