#include <iostream>
#include <queue>
using namespace std;

int N;
queue<int> Q;

void input() {
	cin >> N;
	string command;
	int temp;
	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push") {
			cin >> temp;
			Q.push(temp);
		}
		else if(command == "pop") {
			if (Q.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << Q.front() << "\n";
				Q.pop();
			}
		}
		else if (command == "size") {
			cout << Q.size() << '\n';
		}
		else if (command == "empty") {
			if (Q.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (command == "front") {
			if (Q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << Q.front() << '\n';
			}
		}
		else if (command == "back") {
			if (Q.empty()) {
				cout << -1 << '\n';
			}else {
				cout << Q.back() << '\n';
			}
		}
		else {
			return;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
}