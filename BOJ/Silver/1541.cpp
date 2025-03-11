#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;

char expression[51];
bool isminus = false;

void input() {
	cin >> expression;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int temp = 0;
	int sum = 0;

	input();
	int len = strlen(expression);

	for (int i = 0; i <= len; i++) {
		if (expression[i] == '-' || expression[i] == '+' || i == len) {
			if (!isminus) {
				sum += temp;
				temp = 0;
			}
			else {
				sum -= temp;
				temp = 0;
			}

			if (expression[i] == '-')
				isminus = true;
		}
		else {
			temp = temp * 10;
			temp += (int)expression[i] - 48;
		}
	}

	cout << sum;
}