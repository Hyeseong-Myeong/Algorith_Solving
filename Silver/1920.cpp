#include <iostream>
using namespace std;

//시간초과

int checkNum(int n, int m, int* M) {
	for (int j = 0; j < m; j++) {
		if (n == M[j]) {
			return 1;
		}
	}
	return 0;
}

int main() {
	int m, n;
	
	cin >> m;
	int* M;
	M = new int[m];

	for (int i = 0; i < m; i++) {
		cin >> M[i];
	}

	cin >> n;
	int* N;
	N = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> N[i];
		cout << checkNum(N[i], m, M) << endl;
	}

	
}