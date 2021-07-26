#include <iostream>
using namespace std;

int fibomemo[41] = {0, 1, };

int fibonacci(int n) {
	if (n == 1 || n == 0) {
		return fibomemo[n];
	}
	else if(fibomemo[n] == 0){
		fibomemo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
	return fibomemo[n];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int T, n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		if (n == 0) {
			cout << fibomemo[1] << ' ' << fibomemo[0] << endl;
		}
		else {
			cout << fibonacci(n - 1) << ' ' << fibonacci(n) << endl;
		}
	}


	return 0;
}