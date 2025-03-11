#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	int N;
	cin >> N;
	vector <pair<int, string>> list(N);

	for (int i = 0; i < N; i++) {
		cin >> list[i].first >> list[i].second;
	}

	stable_sort(list.begin(), list.end(), cmp);

	for (int i = 0; i < N; i++) {
		cout << list[i].first << " " << list[i].second << "\n";
	}
	return 0;
}