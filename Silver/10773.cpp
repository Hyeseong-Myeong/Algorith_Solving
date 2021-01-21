#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> stack;
	int n, m;
	int sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> m;
		if (m == 0) {
			if (stack.size() != 0)
				stack.pop();
			else
				;
		}
		else {
			stack.push(m);
		}
	}
	int num;
	while(stack.size() != 0 ) {
		num = stack.top();
		sum = sum + num;
		//When using pop(), stack doesn't return a value
		stack.pop();
	}
	cout << sum;
}