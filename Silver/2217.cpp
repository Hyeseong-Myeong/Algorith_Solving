#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
vector <int> V;

void input() {
	cin >> N;
	int temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		V.push_back(temp);
	}
}

int solve() {
	int ret = 0;
	int sum;
	sort(V.begin(), V.end());
	for (int i = 0; i < N; i++) {
		sum = V[i] * (N - i);
		if (sum > ret)
			ret = sum;
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
