#include <iostream>
using namespace std;

int N;
int sum, part;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> N;
	
	for (int i = 1; i < N; i++) {
		sum = i;
		part = i;

		while (part) {
			sum += part % 10;
			part /= 10;
		}

		if (N == sum) {
			cout << i << '\n';
			return 0;
		}
	}

	cout << 0 << '\n';
	return 0;

}