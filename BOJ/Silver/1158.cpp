#include <iostream>
#include <queue>
using namespace std;

int N, K;
queue <int> Q;

void input() {
	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		Q.push(i);
	}
}

void output() {
	int count = 1;
	cout << "<";
	while (!Q.empty()) {
		if (count++ % K == 0) {
			int temp = Q.front();
			cout << temp;
			Q.pop();
			if (Q.size() >= 1) {
				cout << ", ";
			}
		}
		else {
			int temp = Q.front();
			Q.pop();
			Q.push(temp);
		}
	}
	cout << ">";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
	output();
}