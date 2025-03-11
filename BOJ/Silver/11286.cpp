#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, x;
priority_queue <int, vector<int>, greater<int>> pqP;
priority_queue <int> pqN;


void output() {
	if (pqP.empty() && pqN.empty())
		cout << 0 << "\n";
	else {
		if (pqP.empty() && !pqN.empty()) {
			cout << pqN.top() << "\n";
			pqN.pop();
		}
		else if (!pqP.empty() && pqN.empty()) {
			cout << pqP.top() << "\n";
			pqP.pop();
		}
		else {
			if (pqP.top() < -pqN.top()) {
				cout << pqP.top() << "\n";
				pqP.pop();
			}
			else {
				cout << pqN.top() << "\n";
				pqN.pop();
			}
		}
	}
}

void input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0) {
			output();
		}
		else {
			if (x > 0)
				pqP.push(x);
			else
				pqN.push(x);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();

	return 0;
}