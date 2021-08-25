#include <iostream>
#include <queue>
using namespace std;

queue <int> Q;
int n;
bool traway;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> n;

	for (int i = 1; i <= n; i++) {
		Q.push(i);
	}
	traway = true;
	while (Q.size() > 1) {
		if (traway) {
			Q.pop();
			traway = false;
		}
		else {
			int num = Q.front();
			Q.pop();
			Q.push(num);
			traway = true;
		}
	}
	cout << Q.front() << endl;
}