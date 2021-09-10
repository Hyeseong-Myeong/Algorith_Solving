#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
long long M;
vector <int> tree;

void input() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int length;
		cin >> length;
		tree.push_back(length);
	}
}

int binarySearch() {
	unsigned int start = 0;
	unsigned int end = tree[tree.size() - 1];
	long long mid, ret = 0, sum;
	
	while (start <= end) {
		mid = (start + end) / 2;
		sum = 0;

		for (int i = 0; i < N; i++) {
			if (mid < tree[i])
				sum += tree[i] - mid;
		}

		if (sum >= M) {
			if (ret < mid)
				ret = mid;
			start = mid + 1;
		}
		else
			end = mid - 1;
	}

	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
	sort(tree.begin(), tree.end());
	cout << binarySearch() << '\n';
}