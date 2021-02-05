#include <iostream>
#include <stack>
using namespace std;

int main() {
	int N, Num;
	cin >> N;
	stack <int> StackA;
	string command;
	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push") {
			cin >> Num;
			StackA.push(Num);
		}
		else if (command == "pop") {
			if (StackA.empty())
				cout << -1 << "\n";
			else {
				cout << StackA.top() << "\n";
				StackA.pop();
			}
		}
		else if (command == "top") {
			if (StackA.empty())
				cout << -1 << "\n";
			else
				cout << StackA.top()<< "\n";
		}
		else if (command == "size") {
			cout << StackA.size() << "\n";
		}
		else if (command == "empty") {
			if (StackA.empty() == true)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
	}

	return 0;
}