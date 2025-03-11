#include <iostream>
using namespace std;

//#define min(x,y) x <= y ? x:y

int num2 = 0;
int num5 = 0;
int num10 = 0;

int min(int a, int b) {
	if (a < b)
		return a;
	else
		return b;
}

void facto(int n) {
	if (n == 1)
		return;
	if (n % 10 == 0) {
		num10++;
		facto(n / 10);
	}
	else if (n % 5 == 0) {
		num5++;
		facto(n / 5);
	}
	else if (n % 2 == 0) {
		num2++;
		facto(n / 2);
	}
	return;

}

int solve(int n) {
	for (int i = n; i >= 1; i--) {
		facto(i);
	}
	
	int num = num10 + min(num2, num5);
	return num;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int n;
	cin >> n;

	cout << solve(n) << endl;
}