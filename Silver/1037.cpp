#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int Num;
vector <int> V;

void input() {
	cin >> Num;
	int div;
	for (int i = 0; i < Num; i++) {
		cin >> div;
		V.push_back(div);
	}
}

void solve() {
	sort(V.begin(), V.end());
	cout << V.front() * V.back() << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
	solve();
}