#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
vector <int> A;
vector <int> B;

void input() {
	cin >> N;
	int temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		A.push_back(temp);
	}
	for (int i = 0; i < N; i++) {
		cin >> temp;
		B.push_back(temp);
	}
}

int solve() {
	int ret = 0;
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	for (int i = 0; i < N; i++) {
		ret += A[i] * B[N - 1 - i];
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
	cout << solve() << '\n';

	return 0;
}