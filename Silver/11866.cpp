#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	queue <int> Q;
	for (int i = 1; i <= n; i++) {
		Q.push(i);
	}

	cout << "<";
	while (!Q.empty()) {
		for (int i = 1; i < k; i++) {
			Q.push(Q.front());
			Q.pop();
		}
		cout << Q.front();
		Q.pop();

		if (!Q.empty()) 
			cout << ", ";
		
	}
	cout << ">";
	return 0;

}