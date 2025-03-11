#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int strlength = 0, oddnum = 0, oddcnt = -1;
char name[51];
int cap[26] = { 0, };
stack<char> S;

void input() {
	cin >> name;
	strlength = strlen(name);
}

void count(){
	for (int i = 0; i < strlength; i++) {
		cap[(int)name[i] - 65]++;
	}
	for (int i = 0; i < 26; i++) {
		if (cap[i] % 2 != 0) {
			oddnum++;
			oddcnt = i;
		}
	}
}

void output() {
	if (oddnum != 0)
		cout << (char)(oddcnt + 65);
	while (!S.empty()) {
		cout << S.top();
		S.pop();
	}
}

void solve() {
	count();
	if (oddnum > 1) {
		cout << "I'm Sorry Hansoo" << '\n';
		return;
	}
	else if(oddnum == 1){
		for (int i = 0; i < 26; i++) {
			if (i == oddcnt) {
				cap[i]--;
			}
			for (int j = 0; j < cap[i] / 2; j++) {
				cout << (char)(i + 65);
				S.push((char)(i + 65));
			}
		}
	}
	else {
		for (int i = 0; i < 26; i++) {
			for (int j = 0; j < cap[i] / 2; j++) {
				cout << (char)(i + 65);
				S.push((char)(i + 65));
			}
		}
	}
	
	output();
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
	solve();
}