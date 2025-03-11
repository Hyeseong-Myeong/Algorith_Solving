#include <iostream>
using namespace std;

#define returndiv 10007

int list[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	list[1] = 1;
	list[2] = 2;

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i > 2 && list[i] == 0) {
			list[i] = (list[i - 1] + list[i - 2]) % returndiv;
		}
	}
	cout << list[n] << endl;

}