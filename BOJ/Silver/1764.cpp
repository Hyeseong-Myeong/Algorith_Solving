#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> hList;
	vector<string> sList;

	int n, m;
	int num = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string name;
		cin >> name;
		hList.push_back(name);
	}
	sort(hList.begin(), hList.end());
	for (int i = 0; i < m; i++) {
		string name;
		cin >> name;
		sList.push_back(name);
	}
	sort(sList.begin(), sList.end());
	vector<string> printlist;
	vector<string>::iterator iterator;

	for (iterator = sList.begin(); iterator < sList.end(); iterator++) {
		int low = 0, mid, high = n - 1;

		while (low <= high) {
			mid = low + (high - low) / 2;

			if (hList[mid] == *iterator) {
				num++;
				printlist.push_back(*iterator);
				break;
			}
			else if (hList[mid] > *iterator)
				high = mid - 1;
			else if(hList[mid] < *iterator)
				low = mid + 1;
		}
	}

	cout << num << '\n';
	for (int i = 0; i < num; i++) {
		cout << printlist[i] << '\n';
	}
	
}