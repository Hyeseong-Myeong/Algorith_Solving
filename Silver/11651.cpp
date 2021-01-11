#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int num;
	cin >> num;

	vector<pair<int, int>> loc(num);

	for (int i = 0; i < num; i++) {
		cin >> loc[i].second >> loc[i].first;
	}

	sort(loc.begin(), loc.end());

	for (int i = 0; i < num; i++) {
		printf("%d %d\n", loc[i].second, loc[i].first);
	}
}