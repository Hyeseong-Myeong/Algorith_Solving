#include <iostream>
#include <cstring>
using namespace std;

int alpha[26];
string word;

void input() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> word;
}

void solve() {
	for (int i = 0; i < (int)word.length(); i++) {
		int temp = (int)word[i] - 97;
		if (alpha[temp] == -1) {
			alpha[temp] = i;
		}
		else {
			;
		}
	}
}

void output() {
	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << ' ';
	}
}

int main() {
	memset(alpha, -1, sizeof(alpha));
	input();
	solve();
	output();
}