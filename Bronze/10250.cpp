#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int T;
	int H, W, N;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;

		if (N % H == 0) {
			cout << H;
			if (N / H < 10) {
				cout << 0 << N / H << endl;
			}
			else {
				cout << N / H << endl;
			}
		}
		else {
			cout << N % H;
			if (N / H + 1 < 10) {
				cout << 0 << N / H + 1 << endl;
			}
			else {
				cout << N / H + 1 << endl;
			}
		}
	}
}