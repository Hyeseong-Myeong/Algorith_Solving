#include <iostream>
#include <stack>
using namespace std;

bool bracketStack(string A) {
	stack <int> st;
	for (int i = 0; i < A.size(); i++) {
		if (A[i] == '(')
			st.push(1);
		else if (!st.empty())
			st.pop();
		else
			return false;
	}
	if (st.empty())
		return true;
	else
		return false;
}

int main() {
	int n;
	string temp;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (bracketStack(temp) == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}