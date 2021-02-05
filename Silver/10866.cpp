#include <iostream>
#include <deque>
using namespace std;

void push_front(deque <int> &D, int num) {
	D.push_front(num);
}

void push_back(deque <int>& D, int num) {
	D.push_back(num);
}

void pop_front(deque <int>& D) {
	if (D.empty()) {
		cout << -1 << "\n";
		return;
	}
	cout << D.front() << "\n";
	D.pop_front();
}

void pop_back(deque <int>& D) {
	if (D.empty()) {
		cout << -1 << "\n";
		return;
	}
	cout << D.back() << "\n";
	D.pop_back();
}

void size(deque <int>& D) {
	cout << D.size() << "\n";
}

void empty(deque <int>& D) {
	if (D.empty())
		cout << 1 << "\n";
	else
		cout << 0 << "\n";

	return;
}

void front(deque <int>& D) {
	if (D.empty()) {
		cout << -1 << "\n";
		return;
	}
	cout << D.front() << "\n";
}

void back(deque <int>& D) {
	if (D.empty()) {
		cout << -1 << "\n";
		return;
	}
	cout << D.back() << "\n";
}

int main() {
	int N, num;
	string command;
	deque <int> deq1;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push_front") {
			cin >> num;
			push_front(deq1, num);
		}
		else if (command == "push_back") {
			cin >> num;
			push_back(deq1, num);
		}
		else if (command == "pop_front") {
			pop_front(deq1);
		}
		else if (command == "pop_back") {
			pop_back(deq1);
		}
		else if (command == "size") {
			size(deq1);
		}
		else if (command == "empty") {
			empty(deq1);
		}
		else if (command == "front") {
			front(deq1);
		}
		else if (command == "back") {
			back(deq1);
		}
	}
}