#include <iostream>
using namespace std;

int input[8] = { 0, };
int ascending[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
int descending[8] = { 8, 7, 6, 5, 4, 3, 2, 1 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	bool a_check = true;
	bool d_check = true;

	for (int i = 0; i < 8; i++) {
		cin >> input[i];
	}

	for (int i = 0; i < 8; i++) {
		if (input[i] == ascending[i]) {}
		else
			a_check = false;

		if (input[i] == descending[i]){}
			else
			d_check = false;
	}
	if (a_check)
		cout << "ascending" << '\n';
	else if (d_check)
		cout << "descending" << '\n';
	else if (a_check == false && d_check == false)
		cout << "mixed" << '\n';
}