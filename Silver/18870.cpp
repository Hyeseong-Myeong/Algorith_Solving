#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//lower_bound => binary search(return iterator)
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> list(n);
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}
	vector<int> list_copy(list);

	sort(list_copy.begin(), list_copy.end());
	list_copy.erase(unique(list_copy.begin(), list_copy.end()), list_copy.end());

	for (int i = 0; i < n; i++) {
		vector<int>::iterator it = lower_bound(list_copy.begin(), list_copy.end(), list[i]);
		cout << it - list_copy.begin() << ' ';
	}
	return 0;
}