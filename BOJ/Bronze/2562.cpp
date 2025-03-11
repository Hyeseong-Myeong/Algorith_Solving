#include <iostream>
using namespace std;

int nums[9] = { 0, };

void input() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	int temp = 0;
	int flag = -1;

	for (int i = 0; i < 9; i++) {
		cin >> nums[i];
		if (nums[i] > temp) {
			temp = nums[i];
			flag = i;
		}
	}

	cout << temp << '\n' << flag + 1 << '\n';
}

int main() {
	input();
	return 0;
}