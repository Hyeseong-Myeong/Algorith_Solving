#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M;
vector <int> Nlist;
vector <int> Mlist;

void input() {
	int temp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		Nlist.push_back(temp);
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> temp;
		Mlist.push_back(temp);
	}
}

void solve() {
	int temp;

	sort(Nlist.begin(), Nlist.end());

	for (int i = 0; i < M; i++) {
		bool isin = binary_search(Nlist.begin(), Nlist.end(), Mlist[i]);
		
		if (isin) {
			cout << 1 << '\n';
		}
		else {
			cout << 0 << '\n';
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
	solve();

	return 0;
}