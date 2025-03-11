#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	bool* primeArr = new bool[M + 1];

	//prime num check
	for (int i = 0; i < M + 1; i++) {
		primeArr[i] = true;
	}
	primeArr[1] = false;

	for (int i = 2; i < M + 1; i++) {
		if (primeArr[i]) {

			if ((unsigned int)pow(i, 2) > 1000001) {
				break;
			}else {
				for (int j = (int)pow(i, 2); j < M + 1;) {
					primeArr[j] = false;
					j = j + i;
				}
			}
		}
	}

	for (int i = N; i < M + 1; i++) {
		if (primeArr[i])
			cout << i << '\n';
	}

	delete []primeArr;
	return 0;
}