#include <iostream>
using namespace std;

bool primeCheck(int n) {
	int i;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	if (i == n)
		return true;
	else
		return false;
}

int main() {
	int N;
	int count = 0;
	int num[100];
	cin >> N;

	//input num
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	//prime num check
	for (int i = 0; i < N; i++) {
		if (primeCheck(num[i]))
			count++;
	}
	cout << count;
}