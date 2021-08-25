#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int n, k;
	cin >> n >> k;
	int num = k;
	int a = 1, b = 1;
	for (int i = 0; i < num; i++) {
		a *= n--;
		b *= k--;
	}

	cout << a / b << endl;
}