#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int M, N;
	cin >> N >> M;
	int* num = new int[N];
	int* sum = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> num[i];
		if (i != 0) {
			sum[i] = sum[i - 1] + num[i];
		}
		else {
			sum[i] = num[i];
		}
	} for (int i = 0; i < M; i++) {
		int from, to;
		cin >> from >> to;
		if (from == 1) {
			cout << sum[to - 1] << '\n';
		}
		else {
			cout << sum[to - 1] - sum[from - 2] << '\n';
		}
	}
	return 0;
}