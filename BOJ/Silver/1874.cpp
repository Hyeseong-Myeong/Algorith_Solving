#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int n;
queue<int> Q;
stack<int> ST;
queue<string> Qst;
void input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		Q.push(num);
	}
}

void output() {
	while (!Qst.empty()) {
		cout << Qst.front() << '\n';
		Qst.pop();
	}
}

void solve() {
	int i = 1;
	while (!Q.empty()) {
		if (Q.front() >= i) {
			Qst.push("+");
			ST.push(i++);
		}
		else if (Q.front() == ST.top()) {
			Qst.push("-");
			Q.pop();
			ST.pop();
		}
		else {
			cout << "NO" << '\n';
			return;
		}
	}

	output();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
	solve();
}