#include<iostream>
using namespace std;

int T, n;
string txt;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		cin >> txt;
		for (int j = 0; j < txt.length(); j++) {
			for (int k = 0; k < n; k++) {
				cout << txt[j];
			}
		}
		cout << '\n';
	}
	return 0;
}