#include<iostream>
using namespace std;

int T;
string txt;

int solve() {
	int accumulate = 0;
	int point = 0;

	for (int i = 0; i < txt.length(); i++) {
		if (txt[i] == 'O') {
			point += accumulate + 1;
			accumulate++;
		}
		else if(txt[i] == 'X') {
			accumulate = 0;
		}
	}
	return point;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> txt;
		cout << solve() << '\n';
	}
}