#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool lenthCmp(string a, string b) {
	if (a.size() == b.size())
		return a < b;
	else
		return a.size() < b.size();
}

int main() {
	int n;
	string A;
	vector <string> strA;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> A;
		strA.push_back(A);
	}

	sort(strA.begin(), strA.end(), lenthCmp);
	string B;
	for (int i = 0; i < n; i++) {
		if (B == strA[i]) {
		}
		else {
			cout << strA[i] << endl;
		}
		B = strA[i];
	}

	
}