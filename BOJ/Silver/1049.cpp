#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M;
vector<int> list_set;
vector<int> list_single;

void input() {
	int set, single;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> set >> single;
		list_set.push_back(set);
		list_single.push_back(single);
	}
}

int num() {
	if (N % 6 > 0) {
		return N / 6 + 1;
	}
	else {
		return N / 6;
	}
}

void solve() {
	sort(list_set.begin(), list_set.end());
	sort(list_single.begin(), list_single.end());
	int ret_set = list_set[0] * num();
	int ret_sing = list_single[0] * N;
	int ret_mix = (list_set[0] * (N / 6)) + (list_single[0] * (N % 6));
	int ret[3];
	ret[0] = ret_set;
	ret[1] = ret_sing;
	ret[2] = ret_mix;
	cout <<  *min_element(ret, ret + 3) << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
	solve();

	return 0;
}