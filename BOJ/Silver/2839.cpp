#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



void main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int N;
	int num_5 = 0;
	vector<int> ans;
	cin >> N;


	while (num_5 * 5 <= N) {
		if ((N - (5 * num_5)) % 3 == 0) {
			int num_3 = (N - (5 * num_5)) / 3;
			ans.push_back(num_5 + num_3);
		}
		num_5++;
	}

	if (ans.size() == 0)
		cout << -1;
	else {
		sort(ans.begin(), ans.end());
		cout << ans.at(0);
	}

}