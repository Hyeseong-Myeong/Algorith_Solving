#include <iostream>
using namespace std;

int a, b;
int rev_a = 0 , rev_b = 0;

void input() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> a >> b;
	rev_a += (a % 10) * 100;
	a /= 10;
	rev_a += (a % 10) * 10;
	a /= 10;
	rev_a += (a % 10);
	
	rev_b += (b % 10) * 100;
	b /= 10;
	rev_b += (b % 10) * 10;
	b /= 10;
	rev_b += (b % 10);
	
}

int main() {
	input();
	if (rev_a > rev_b) {
		cout << rev_a;
	}
	else {
		cout << rev_b;
	}
}