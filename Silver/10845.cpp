#include <iostream>
#include <queue>
using namespace std;

void push(queue <int>&Q, int n) {
	Q.push(n);
}

void pop(queue <int>&Q) {
	if (Q.empty()) {
		cout << -1 << "\n";
		return;
	}
	int num = Q.front();
	cout << num << "\n";
	Q.pop();
	return;
}

void size(queue<int> &Q) {
	cout << Q.size() << "\n";
	return;
}

void empty(queue<int> &Q) {
	if (Q.empty())
		cout << 1 << "\n";
	else
		cout << 0 << "\n";

	return;
}

void front(queue <int>&Q) {
	if (Q.empty()) {
		cout << -1 << "\n";
		return;
	}
	cout << Q.front() << "\n";
}

void back(queue <int>&Q) {
	if (Q.empty()) {
		cout << -1 << "\n";
		return;
	}
	cout << Q.back() << "\n";
}

int main() {
	int N, num;
	string command;
	queue <int> Q1;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			push(Q1, num);
		}
		else if (command == "pop") {
			pop(Q1);
		}
		else if (command == "size") {
			size(Q1);
		}
		else if (command == "empty") {
			empty(Q1);
		}
		else if (command == "front") {
			front(Q1);
		}
		else if (command == "back") {
			back(Q1);
		}
	}
}