#include <iostream>
#include <stack>
using namespace std;

stack <int> S;
string list;

void input() {
	cin >> list;
}

int solve() {
	int piece = 0;
	int i = 0;
	while (list[i] != '\0') {
		if (list[i] == '(') {
			S.push(1);
		}
		else {
			if (list[i - 1] == '(') {
				S.pop();
				piece += S.size();
			}
			else {
				S.pop();
				piece++;
			}
		}
		i++;
	}
	return piece;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	
	input();
	cout << solve() << '\n';

}