#include <iostream>
#include <math.h>
#define MAX 100001
using namespace std;


int num;
int DP[MAX];

void input() {
	cin >> num;
	return;
}

int MIN(int a, int b) {
	if (a > b) {
		return b;
	}
	return a;
}

int solve() {
	for (int i = 1; i <= num; i++) {
		DP[i] = i;
		for (int j = 1; pow(j, 2) <= i; j++) {
			DP[i] = MIN(DP[i], DP[i - j * j] + 1);
		}
	}
	return DP[num];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	input();
	cout << solve() << '\n';
	return 0;
}